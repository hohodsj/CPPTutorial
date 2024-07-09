#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num1 { 123456789.987654321 };
    double num2 { 1234.5678 };
    double num3 { 1234.0 };

    // using default settings
    // by default it shows 6 digits from left to right
    std::cout << "Default---" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Note how since we can't display in percision 2 scientific notation is used
    // it shows 2 digits from left to right
    std::cout << std::setprecision(2);
    std::cout << "Precision 2---" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // by default it shows 9 digits from left to right
    std::cout << std::setprecision(9);
    std::cout << "Precision 9---" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;


    // percision 3 and fixed(3 digit after decimal)
    std::cout << std::setprecision(3) << std::fixed;
    std::cout << "Precision 3 fixed---" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // percision 3 and scientific (Note fix is still set)
    std::cout << std::setprecision(3) << std::scientific;
    std::cout << "Precision 3 scientific---" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    

    return 0;
}