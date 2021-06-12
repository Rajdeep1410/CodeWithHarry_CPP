// C++ program to demonstrate File Handling

/*
The useful classes for working with files in C++ are:

1) fstreambase
2) ifstream --> derived from fstreambase
3) ofstream --> derived from fstreambase



//In order to work with files in C++, you'll have to open it. Primarily,there are 2 ways to open a file:-

1) Using the constructor.
2) Using the member function open() of the class.

*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{

//     string st = "Harry bhai";

//     // Opening files using constructor and writing it
//     ofstream out("sample60.txt"); // Write operation // ofstream is a class in fstream header and 'out' is its object.

//     out << st;

//     return 0;
// }


    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample60a.txt"); // Read operation
    //in >> st2;      // This will not read spaces
    getline(in, st2);    // This will read an entire line incl of spaces.
    cout << st2;

    return 0;
}
