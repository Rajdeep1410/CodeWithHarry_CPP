// This program introduces pointers in C++

#include <iostream>
using namespace std;

int main()
{
    // What is a pointer? ----> Data type which holds the address of other data types
    int a = 3;
    int *b; // b is a pointer variable of type int
    b = &a;

    // & ---> (Address of) Operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    // * ---> (value at) Dereference operator
    cout << "The value at address b is " << *b << endl;

    // Pointer to pointer
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;                           // c contains the address of b
    cout << "The value at c (ie value at address of b) is " << *c << endl; // this is the address of b
    cout << "The value at *c (ie value at the value at address of b (ie value at address of a)) is " << **c << endl;

    return 0;
}
