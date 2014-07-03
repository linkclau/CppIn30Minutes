// The simples C++ program with observable output
//
// Topic: incudes & preprocessor, standard library, namespace, streams, operator 
//
// Watch: Sizeof preprocesor output 
//          g++ -E 01-hello-main.cpp   | wc 
//             37402  102779 1206796
//      Meaning near 40k lines, ~1.2Mb
//          g++ -E 01-hello-main.cpp | grep "# 1 " | cut -d " " -f 3 | sort -u | wc -l
//               188
//      over 180 included headers
//      On Mac OS 10.9.4, Apple LLVM version 5.1 (clang-503.0.40) (based on LLVM 3.4svn)
//      /usr/include/c++/4.2.1
#include <iostream>

int main() 
{
    std::cout << "Hello World!" << std::endl;
}
