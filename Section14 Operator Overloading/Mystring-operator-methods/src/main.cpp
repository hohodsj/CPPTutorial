#include <iostream>
#include "Mystring.h"

// https://github.com/Kwounsu/VSCode_cpp/blob/main/tasks.json
using namespace std;

int main()
{
    Mystring larry{"Larry"};
    Mystring moe{"moe"};

    Mystring stooge = larry;
    larry.display();
    moe.display();

    cout << (larry == moe) << endl;
    cout << (larry == stooge) << endl;

    larry.display();
    Mystring larry2 = -larry;
    larry2.display();

    Mystring stooges = larry + "Moe";
    Mystring two_stooges = moe + " " + "Larry";

    // Mystring test = "Test " + two_stooges;
    // test.display();
    
    /*
    Mystring empty;
    Mystring larry("Larry");
    Mystring stooge {larry};

    empty.display();
    larry.display();
    stooge.display();
    */
    
    return 0;
}