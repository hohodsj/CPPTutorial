#include <iostream>
#include "Mystring.h"

// https://github.com/Kwounsu/VSCode_cpp/blob/main/tasks.json
using namespace std;

int main()
{
    Mystring empty;
    Mystring larry("Larry");
    Mystring stooge {larry};

    empty.display();
    larry.display();
    stooge.display();
    
    return 0;
}