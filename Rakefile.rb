

sources = FileList['**/*.cpp']

objects = [] 
sources.each{|cpp|
  object = cpp.sub( /\.cpp$/, '.o' )
  puts "#{cpp} #{object}"
  objects << object
  file object => [ cpp ] {|t|
    cmd = "g++ -Wall  -Weverything -pedantic -c -o #{t.name} #{t.prerequisites.join(' ')}"
    sh cmd
  }
}



task :default => objects
