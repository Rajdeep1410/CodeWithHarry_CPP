// C++ Program on File Handling 

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // connecting our file to hout stream.
    ofstream hout("sample60.txt");

    // creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name: "<<endl;
    
    //cin>>name;    // doesn't read the spaces, will take only the first string.
    getline(cin,name); // will take the entire line as input
    
    hout<<"My name is " + name; //Writing a string to the file

    hout.close();

    ifstream hin("sample60.txt");
    string content;

    // hin>>content;   // will read content from the file - will read only 1 word
    getline(hin,content); // will read the entire line
    cout<<"The content of this file is:\n "<<content;

    hin.close();  // this closes the connection between this program and the sample60.txt file
    return 0;


}

