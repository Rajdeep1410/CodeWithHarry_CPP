// C++ Program to illustrate constructor overloading

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex();
    Complex(int x, int y);
    Complex(int x);
    void printNumber();
};
 Complex::Complex()
 {
        a = 0;
        b =0;
 }
Complex::Complex(int x, int y)
{
        a = x;
        b = y;
}
Complex::Complex(int x)
{
        a = x;
        b = 0;
}
void Complex::printNumber()
{
        cout << "Your number is " << a << " + " << b << "i" << endl;
}
int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}
