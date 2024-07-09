#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num {255};

    // Displaying using different bases
    std::cout << "\n===" << std::endl;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    // Displaying showing the base prefix for hex and oct
    std::cout << "\n===" << std::endl;
    std::cout << std::showbase;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    // Displaying the hex value in upper
    std::cout << "\n===" << std::endl;
    std::cout << std::showbase << std::uppercase;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    // Displaying + sign in front of value
    std::cout << "\n===" << std::endl;
    std::cout << std::showpos;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    // setting using the set method
    std::cout.setf(std::ios::showbase);
    std::cout.setf(std::ios::uppercase);
    std::cout.setf(std::ios::showpos);

    // unset
    // setting using the set method
    std::cout.unsetf(std::ios::showbase);
    std::cout.unsetf(std::ios::uppercase);
    std::cout.unsetf(std::ios::showpos);
}