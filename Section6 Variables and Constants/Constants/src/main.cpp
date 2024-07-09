#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    /*
    Prompt the user to enter the number of rooms
    Display number of rooms
    Display price per room
    */

   const double PRICE_PER_ROOM = 32.5;
   const double TAX = 0.06;
   cout << "Hello, welcome to carpet cleaning service" << endl;
   cout << "How many rooms would you like to clean?" << endl;

   int number_of_rooms {0};
   cin >> number_of_rooms;

   cout << endl;
   cout << "Estimate for carpet cleaning service" << endl;
   cout << "NUmber of rooms: " << number_of_rooms << endl;
   cout << "Price per room: " << PRICE_PER_ROOM << endl;
   cout << "Cost: $" << PRICE_PER_ROOM * number_of_rooms << endl;
   cout << "Tax: $" << PRICE_PER_ROOM * number_of_rooms*TAX << endl;
   cout << "============================" << endl;
   cout << "Total estimate:$" << PRICE_PER_ROOM * number_of_rooms*(1+TAX) << endl;

}