// Greet in a loop
//
// Topic: for, offset aritmetc, no range checking
//
// Warning: C++ does what you tell it
//      e.g.  argc = 3;
#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    for( char** g = argv+1; g!= argv+argc; ++g) {
        cout << "Hello " << *g << "!" << endl;
    }
}
