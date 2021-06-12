// C++ Program to demonstrate Copy Constructor

// Copy constructor is used to create an object that is an exact copy of another object

#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked to create object z1 that exactly resembles object z
    z1.display();

    z2 = z;     // Copy constructor not invoked as object is already created at line 37
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();

    return 0;
}
