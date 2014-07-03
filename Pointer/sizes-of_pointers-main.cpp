#include <iostream>

#define SIZE_INFO( type ) #type << ":\t" << sizeof(type) 


struct A {
    int a_;
};

struct B0 : public A {
    int b_;
};

struct B1 : public A {
    int b_;
};

struct C : public B0, B1 {
    int c_;
};

using std::cout;
using std::endl;

int main()
{
    cout << "Basic types: " << endl;
    cout << SIZE_INFO( int ) << endl;
    cout << "Classes: " << endl;
    cout << SIZE_INFO( A ) << endl;
    cout << SIZE_INFO( B0 ) << endl;
    cout << SIZE_INFO( B1 ) << endl;
    cout << SIZE_INFO( C ) << endl;
    cout << endl;

    cout << "Pointer types: " << endl;
    cout << "Basic types: " << endl
            << SIZE_INFO( int* ) << endl
            << SIZE_INFO( void* ) << endl;
    cout << "Classes: " << endl
            << SIZE_INFO( A* ) << endl
            << SIZE_INFO( B0* ) << endl
            << SIZE_INFO( B1* ) << endl
            << SIZE_INFO( C* ) << endl;
}
