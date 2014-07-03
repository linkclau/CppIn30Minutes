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

struct VB0 : public virtual A {
    int b_;
};

struct VB1 : public virtual A {
    int b_;
};

struct VC : public virtual B0, public virtual B1 {
    int c_;
};

using std::cout;
using std::endl;

int main()
{
    cout << "Basic types: " << endl;
    cout << SIZE_INFO( int ) << endl;
    cout << "Standard inheritance: " << endl
            << SIZE_INFO( A ) << endl
            << SIZE_INFO( B0 ) << endl
            << SIZE_INFO( B1 ) << endl
            << SIZE_INFO( C ) << endl;
    cout << "Virtual inheritance: " << endl
            << SIZE_INFO( A ) << endl
            << SIZE_INFO( VB0 ) << endl
            << SIZE_INFO( VB1 ) << endl
            << SIZE_INFO( VC ) << endl;
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
    cout << "Virtual inherited Classes: " << endl
            << SIZE_INFO( A* ) << endl
            << SIZE_INFO( VB0* ) << endl
            << SIZE_INFO( VB1* ) << endl
            << SIZE_INFO( VC* ) << endl;
}
