#include <iostream>
#include "Mystring.h"

// https://github.com/Kwounsu/VSCode_cpp/blob/main/tasks.json
using namespace std;

int main()
{
    Mystring larry{"Larry"};
    Mystring moe{"moe"};
    Mystring curly;

    cout << "Enter the third stooge's name: ";
    cin >> curly;

    cout << "The three stooges are " << larry << ", " << moe << ", " << curly << endl;

    cout << "Enter the three stooges names separated by a space: ";
    cin >> larry >> moe >> curly;

    cout << "The three stooges are " << larry << ", " << moe << ", " << curly << endl;

    return 0;
}