// C++ Program to demonstrate Destructor

// A destructor doesnot take any parameter argument. It doesnot return any value.
// It is run by the compiler automatically(implicitly) to clear the memory allocated by an object --> destroy the object

#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number" << count << endl;
    }

    ~num()      // Destructor
    {
        cout << "This is the time when my destructor is called for object number" << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {   
        // we can create blocks {} like this, meaning - the scope of all that we write here is limited within this block {} and becomes irrelevant when outside of it. 
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}

/* Logic
------------
- When object is created, Constructor is called
- When the compiler understands that an object is no longer needed, it invokes the destructor.
*/