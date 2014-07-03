#include <iostream>
#include <string>

#define SIZE_INFO( type ) #type << ": " << sizeof(type) 

using std::string;

struct A {
    string a_;
};

struct BLeft : public A {
    string b_;
};

struct BRight : public A {
    string b_;
};

struct C : public BLeft, BRight {
    string c_;
};

int main()
{
    std::cout << SIZE_INFO( int* ) << std::endl;
    std::cout << SIZE_INFO( void* ) << std::endl;
    std::cout << SIZE_INFO( A* ) << std::endl;
    std::cout << SIZE_INFO( BLeft* ) << std::endl;
    std::cout << SIZE_INFO( BRight* ) << std::endl;
    std::cout << SIZE_INFO( C* ) << std::endl;
}
