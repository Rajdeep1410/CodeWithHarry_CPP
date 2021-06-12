#include <iostream>
using namespace std;
/*
Student --> Test, Sports --> Result

The Base Class Student is being derived in Test and Sports classes virtually

This will result in no ambiguity as the data member 'roll_no' and member function set_number(int) of Student class will be
derived only once in derived class Result.

If we don't use virtual keyword then compiler will be confused as to which 
set_number() to be called in main() by Result object. Is it for Test or Sports? and compiler throws an error.

This is the significance of virtual base class 
*/

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }

    void print_number()
    {
        cout << "Yor roll number is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void print_marks(void)
    {
        cout << "You result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    Result harry;
    harry.set_number(4200);
    harry.set_marks(78.9, 99.5);
    harry.set_score(9);
    harry.display();
    return 0;
}