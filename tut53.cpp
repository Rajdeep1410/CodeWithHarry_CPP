// this Pointer in C++

#include<iostream>
using namespace std;
class A{
    int a;
    public:
        // A & setData(int a){   --> to return object of type A
        void setData(int a){
            this->a = a;
            // return *this;   --> this keyword here will return A object.
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    // this is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    a.setData(4);
    a.getData();
    return 0;
}