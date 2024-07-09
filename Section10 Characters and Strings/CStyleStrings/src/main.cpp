#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};
    // cout << first_name;
    cout << "Enter first name: ";
    cin >> first_name;
    cout << "Enter last name: ";
    cin >> last_name;

    cout << "Hello, " << first_name << " your firstname has length " << strlen(first_name);
    cout << " your last name length " << strlen(last_name) << endl;

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

    cout << "Full name: " << full_name << endl;
    
}