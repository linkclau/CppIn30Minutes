require 'rake/clean'

sources = FileList['**/*.cpp']

objects = sources.map{|s| s.sub('.cpp', '.o') }
CLEAN << objects
objects.each{|o|
  file o => [ o.sub( '.o', '.cpp' )  ] {|t|
    cmd = "g++ -Wall  -Weverything -pedantic -c -o #{t.name} #{t.prerequisites.join(' ')}"
    sh cmd
  }
}

executables = FileList['**/*-main*.cpp'].map{|e| e.sub('.cpp', '') }
CLEAN << executables
executables.each{|e|
  file e => [ e + '.o' ] {|t|
    cmd = "g++ -Wall  -Weverything -pedantic -o #{t.name} #{t.prerequisites.join(' ')}"
    sh cmd
  }
}


task :default => executables + objects
