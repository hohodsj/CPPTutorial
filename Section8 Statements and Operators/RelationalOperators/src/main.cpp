#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int a {}, b{};
    cin >> a >> b;
    auto res = a <=> b;
    cout << "a: " << a << " b: " << b << " a <=> b: "<< res << endl;
}