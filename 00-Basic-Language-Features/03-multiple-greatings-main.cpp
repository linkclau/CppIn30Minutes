// Greet in a loop
//
// Topic: for, 
//
#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    for( char** g = argv+1; g!= argv+argc; ++g) {
        cout << "Hello " << *g << "!" << endl;
    }
}
