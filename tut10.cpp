#include <iostream>

using namespace std;
int main()
{
    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
    */


    // Syntax for for loop - 
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    // for (int i = 1; i <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }

    // Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)   // the condition 34<=40 is always true so loop will run infinitely
    // {
    //     cout<<i<<endl;
    // }

    /*While loop in C++*/
    // Syntax:
    // initialization
    // while(condition)
    // {
    //    C++ statements; 
    //    updation
    // }

    //  Printing 1 to 40 using while loop
    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinite while loop
    // int i = 1;
    // while (true)     // always true or 1
    // {
    //     cout << i << endl;
    //     i++;
    // }

    /* do While loop in C++*/
        // Syntax:
        // initialization
        // do
        // {
        //    C++ statements; 
        //    updation
        // }while(condition);     // note the semi-colon ;
        
    //  Printing 1 to 40 using while loop
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(false);

    return 0;
}
