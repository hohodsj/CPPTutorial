#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int temperature;
    cout << "Enter a temperature: ";
    cin >> temperature;
    if (temperature < 50);
    cout << "It's cold!" << endl;
    if (temperature > 50)
        cout << "It's hot!" << endl;
    else
        cout << "Maybe it's raining?"; 
}