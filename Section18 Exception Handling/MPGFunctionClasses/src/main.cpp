#include <iostream>

using namespace std;

class DivideByZeroException {};

class NegativeValueException {};

double calculate_mpg(int miles, int gallons) {
    if(gallons == 0)
        throw DivideByZeroException();
    if(miles < 0 || gallons < 0) 
        throw NegativeValueException();
        
    return static_cast<double>(miles) / gallons;
}

int main()
{
    int miles{};
    int gallons{};
    double miles_per_gallon{};

    std::cout << "Enter miles:";
    std::cin >> miles;
    std::cout << "Enter gallons:";
    std::cin >> gallons;
    try {
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << "Result: " <<miles_per_gallon << std::endl;
    }
    catch(const DivideByZeroException &ex) {
        std::cerr << "Tried to divide by zero" << std::endl;
    }
    catch(const NegativeValueException &ex) {
        std::cerr << "Negative value" << std::endl;
    }
    

    std::cout << "Bye" <<std::endl;
   
    return 0;
}