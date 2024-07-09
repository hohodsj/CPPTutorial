#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<char> encrypt {'z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y'};

    string input{};
    string enc{};
    cout << "Enter a word: ";
    cin >> input;
    for(int i = 0; i < input.length(); i++) {
        char c = input.at(i);
        enc += encrypt[c - 'a'];
    }
    cout << "Encrypt: " << enc << endl;
}