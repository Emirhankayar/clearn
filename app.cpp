#include <iostream>
// https://www.youtube.com/watch?v=_bYFu9mBnr4
// 
// TO COMPILE g++ filename.cpp and to run ./a.out
//
// 01 std:: standart namespace
// 02 iostream is a library
// 03 to import use #include
// 04 avoid to use 'using namespace std::'
// 05 cout is an object
// 06 classes are consists of objects
// 07 operator <<
// 08 cout and "Hello World" are Operands
using namespace std;

int main() // main func
{
    int slices; // declaration
    slices = 5 + 1; // initialization
    std::cout << "Hello World\n";
    int children = slices;
    slices = 1000;
    std::cout << children;
    return 0;
}