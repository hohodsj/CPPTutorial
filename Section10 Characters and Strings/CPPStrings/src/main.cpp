#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1}; // Apple
    string s6 {s1, 0, 3}; // App
    string s7 {10, 'X'}; // XXXXXXXXXX

    cout << s0 << endl; // No garbage
    cout << s0.length() << endl;

    // Assignment
    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl; // watermelon

    s2 = s1;
    cout << "s2 is now: " << s2 << endl; // watermelon

    s3 = "Frank";
    cout << "s3 is now: " << s3 << endl; // Frank

    s3[0] = 'C';
    cout << "s3 is now: " << s3 << endl; // Crank
    s3.at(0) = 'P';
    cout << "s3 is now: " << s3 << endl; // Crank

    // Concatenation
    s3 = "Watermelon";

    s3 = s5 + " and " + s2 + "juice"; // Apple and Banana juice
    cout << "s3 is now: " << s3 << endl; 

    // s3 = "nice " + " cold " + s5 + "juice"; //Compiler error
    // string temp1 = "nice";
    // string temp2 = " stuff";
    // string temp3 = temp1 + temp2;
    // cout << temp3 << endl;

    // Erase
    s1 = "This is a test";
    s1.erase(0,5);
    cout << "s1 is now " << s1 << endl;

    //getline
    // string full_name{};
    // cout << "Enter your full name: ";
    // getline(cin, full_name); // this can consume space
    // cout << "Your full name is: " << full_name << endl;

    s1 = "The secret word is Boo";
    string word {};
    cout << "ENter the word to find:";
    cin >> word;

    size_t position = s1.find(word);
    if(position != string::npos)
        cout << "Found " << word << " at position:" << position << endl;
    else
        cout << "Sorry, " << word << " not found" << endl;
    cout << endl;
    return 0;
}