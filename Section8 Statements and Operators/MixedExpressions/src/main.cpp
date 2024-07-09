#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int total {};
    int num1{}, num2{}, num3{};
    const int count{3};
    cout << "Enter 3 int separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    total = num1 + num2 + num3;
    double average {0.0};
    average = static_cast<double>(total) / count;
    cout << num1 << " " << num2 << " " <<num3 << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
}