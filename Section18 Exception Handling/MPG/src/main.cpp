#include <iostream>

using namespace std;

int main()
{
    int miles{};
    int gallons{};
    double miles_per_gallon{};

    std::cout << "Enter miles:";
    std::cin >> miles;
    std::cout << "Enter gallons:";
    std::cin >> gallons;

    // miles_per_gallon = miles / gallons;
    if (gallons != 0) {
        miles_per_gallon = static_cast<double>(miles) / gallons;
        std::cout << "Result: " << miles_per_gallon << std::endl;
    } else {
        std::cerr << "Sorry, can't divide by zero" << std::endl;
    }
    return 0;
}