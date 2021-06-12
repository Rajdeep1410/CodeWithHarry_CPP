// There are two types of header files:
// 1. System header files: It comes with the compiler
#include<iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" //--> This will produce an error if this.h is no present in the current directory
// " " represents that the header file is present in the current directory
using namespace std;

int main(){
    int a=4, b=5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    // Arithmetic operators
    cout<<"The value of a + b is "<<a+b<<endl; // 9
    cout<<"The value of a - b is "<<a-b<<endl; // -1
    cout<<"The value of a * b is "<<a*b<<endl; // 20
    cout<<"The value of a / b is "<<a/b<<endl; // 0
    cout<<"The value of a % b is "<<a%b<<endl; // 4
    cout<<"The value of a++ is "<<a++<<endl; // 4
    cout<<"The value of a-- is "<<a--<<endl; // 5
    cout<<"The value of ++a is "<<++a<<endl; // 5
    cout<<"The value of --a is "<<--a<<endl; // 4
    cout<<endl;

    // Assignment Operators --> used to assign values to variables
    // int a =3, b=9;
    // char d='d';

    // Comparison operators
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl; // 0
    cout<<"The value of a != b is "<<(a!=b)<<endl; // 1
    cout<<"The value of a >= b is "<<(a>=b)<<endl; // 0
    cout<<"The value of a <= b is "<<(a<=b)<<endl; // 1
    cout<<"The value of a > b is "<<(a>b)<<endl; // 0 
    cout<<"The value of a < b is "<<(a<b)<<endl; // 1

    // Logical operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl; // 0
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl; // 1
    cout<<"The value of this logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;  // 1


    return 0;
}