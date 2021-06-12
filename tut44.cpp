// Virtual Base Class

/*
What is a virtual base class?
- An ambiguity can arise when several paths exist to a class from the same base class. This means that a child class could have duplicate sets of members inherited from a single base class.
- C++ solves this issue by introducing a virtual base class. When a class is made virtual, necessary care is taken so that the duplication is avoided regardless of the number of paths that exist to the child class.
What is Virtual base class? Explain its uses.
- When two or more objects are derived from a common base class, we can prevent multiple copies of the base class being present in an object derived from those objects by declaring the base class as virtual when it is being inherited. Such a base class is known as virtual base class. This can be achieved by preceding the base class’ name with the word virtual.
- Consider the following example :
*/

// The below program has been taken from below site
//https://www.careerride.com/C++-what-is-a-virtual-base-class.aspx#:~:text=%2D%20When%20two%20or%20more%20objects,known%20as%20virtual%20base%20class.

#include <iostream>

using namespace std;

class A
{
public:
    int i;
};

class B : virtual public A
{
public:
    int j;
};

class C : virtual public A
{
public:
    int k;
};

class D : public B, public C
{
public:
    int sum;
};

int main()
{
    D ob;
    ob.i = 10; //unambiguous since only one copy of i is inherited.
    ob.j = 20;
    ob.k = 30;
    ob.sum = ob.i + ob.j + ob.k;
    cout << "Value of i is : "<< ob.i <<"\n";
    cout << "Value of j is : "<< ob.j <<"\n";
    cout << "Value of k is : "<< ob.k <<"\n";
    cout << "Sum is : "<< ob.sum <<"\n";

    return 0;
}