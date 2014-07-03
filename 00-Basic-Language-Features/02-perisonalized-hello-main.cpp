// Danamic greeting
//
// Topic: variables, string, using, conditionals (if), 
//          function arguments, char, pointers, command line arguments
//
// Note: Pre-processed size same as before
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) 
{
    string greetingTarget("World");

    if( argc>1) {
        greetingTarget = argv[1];
    }

    cout << "Hello " << greetingTarget << "!" << endl;
}
