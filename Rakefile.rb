require 'rake/clean'

sources = FileList['**/*.cpp']

CXX_FLAGS = "-Wall  -Weverything -pedantic -std=c++11 -Wno-c++11-extensions"

objects = sources.map{|s| s.sub('.cpp', '.o') }
CLEAN << objects
objects.each{|o|
  file o => [ o.sub( '.o', '.cpp' )  ] {|t|
    cmd = "g++ #{CXX_FLAGS} -c -o #{t.name} #{t.prerequisites.join(' ')}"
    sh cmd
  }
}

executables = FileList['**/*-main*.cpp'].map{|e| e.sub('.cpp', '') }
CLEAN << executables
executables.each{|e|
  file e => [ e + '.o' ] {|t|
    cmd = "g++ #{CXX_FLAGS} -o #{t.name} #{t.prerequisites.join(' ')}"
    sh cmd
  }
}


task :default => executables + objects
