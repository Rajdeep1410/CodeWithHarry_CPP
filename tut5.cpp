//Below program demonstrates Input/Output in C++

#include<iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout<<"\n Enter the value of num1: ";       // '<<' is called insertion operator
    cin>>num1;      // '>>' is called extraction operator

    cout<<"\n Enter the value of num2: ";
    cin>>num2;
    
    cout<<"\n The sum is:"<<num1 + num2;
    return 0;
}
