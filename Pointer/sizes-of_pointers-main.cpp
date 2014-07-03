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
    cout << SIZE_INFO( int* ) << std::endl;
    cout << SIZE_INFO( void* ) << std::endl;
    cout << SIZE_INFO( A* ) << std::endl;
    cout << SIZE_INFO( A ) << std::endl;
    cout << SIZE_INFO( B0* ) << std::endl;
    cout << SIZE_INFO( B0 ) << std::endl;
    cout << SIZE_INFO( B1* ) << std::endl;
    cout << SIZE_INFO( B1 ) << std::endl;
    cout << SIZE_INFO( C* ) << std::endl;
    cout << SIZE_INFO( C ) << std::endl;
}
