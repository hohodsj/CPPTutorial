#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string input{};
    cout << "Enter a string: ";
    cin >> input;
    string sofar{};
    for(int i = 0; i < input.length(); i++) {
        sofar += input.at(i);
        int padding_space = input.length() - i - 1;
        string spaces (padding_space, ' ');
        cout << spaces << sofar;
        if(sofar.length() > 1) {
            string rev{sofar.substr(0, sofar.length() - 1)};
            reverse(rev.begin(), rev.end());
            cout << rev;
        }
        cout << endl;
    }
    return 0;
}