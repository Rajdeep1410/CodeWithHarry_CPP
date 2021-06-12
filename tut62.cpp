// C++ Program - File Handling Part 3

// Here we will use the open() function to open a file and edit it

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out;       // ofstream is used to write
    out.open("sample60.txt");
    out<<"This is me.\n";
    out<<"This is also me.";
    out.close();

    ifstream in;        // ifstream is used to read
    string st1,st2;
    in.open("sample60.txt");
    // in>>st1>>st2; // will read each word and store first word in st1 and second word in st2
    // cout<<st1<<" "<<st2; // will print first two words only i.e -> This is

    //while(in.eof()==0)      // eof() --> end of file; this condition checks till end-of-file is reached.
    // in.eof == 0 ; 0 = false ie haven't reached; we can also write as while(!in.eof())
    while(!in.eof())
    {
        getline(in,st1);
        cout<<st1<<endl;
    }

    in.close();
    return 0;
}