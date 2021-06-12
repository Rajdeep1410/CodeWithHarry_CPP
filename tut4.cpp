// This program demonstrates the behaviour of local and global variables in C++

#include<iostream>

using namespace std;
int glo=6;  // declaring a global variable
void sum(){
    int a;
    cout<<"\n The val of glo in sum func is: "<<glo; // will print the global value - first it will check if there is any local glo declared, 
                                                     //since not, so will print the value of global glo
}
int main(){
    int glo=7;  // This variable is local to main()
    glo=9;  // This will update the local 'glo' variable
    int a=4;
    int b=5;
    float pi=3.14;  
    char c='R';
    bool j= true;
    cout<<"Here value of a is:"<<a<<" and value of b is:"<<b;
    cout<<"\n The value of pi is: "<<pi;
    cout<<"\n The value of c is: "<<c;
    sum();
    cout<<"\n The value of glo is: "<<glo;
    cout<<"\n The value of boolean variable j is: "<<j; // prints 1 for true and 0 for false
    return 0;
}