#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function prototypes
double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double);

const double pi = 3.14159;


int main()
{
    cout << calc_volume_cylinder(10,2) << endl;
}

double calc_volume_cylinder(double radius, double height) {
    return calc_area_circle(radius) * height;
}

double calc_area_circle(double radius) {
    return pi * radius * radius;
}