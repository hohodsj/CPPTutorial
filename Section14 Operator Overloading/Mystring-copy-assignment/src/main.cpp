#include <iostream>
#include "Mystring.h"

// https://github.com/Kwounsu/VSCode_cpp/blob/main/tasks.json
using namespace std;

int main()
{
    Mystring a {"Hello"};
    Mystring b;
    b = a;
    b = "This is a test";
    
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