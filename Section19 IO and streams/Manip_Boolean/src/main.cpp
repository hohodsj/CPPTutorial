#include <iostream>

int main()
{
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "nobooalpha - default (10 == 20): " << (10 == 20) << std::endl;

    // Set to true/false formatting
    std::cout << std::boolalpha;
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "nobooalpha - default (10 == 20): " << (10 == 20) << std::endl;

    // setting still stays for future boolean
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "nobooalpha - default (10 == 20): " << (10 == 20) << std::endl;

    // toggle to 0/1
    std::cout << std::noboolalpha;
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "nobooalpha - default (10 == 20): " << (10 == 20) << std::endl;

    // set back to true/false using setf method
    std::cout.setf(std::ios::boolalpha);
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "nobooalpha - default (10 == 20): " << (10 == 20) << std::endl;

    // reset to default with is 0/1
    std::cout.unsetf(std::ios::boolalpha);
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "nobooalpha - default (10 == 20): " << (10 == 20) << std::endl;
}