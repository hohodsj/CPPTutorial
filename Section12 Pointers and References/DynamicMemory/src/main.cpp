#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int *int_ptr {nullptr};
    int_ptr = new int;
    cout << int_ptr << endl;
    delete int_ptr;
    cout << endl;

    // conti
    size_t size{0};
    double *temp_ptr {nullptr};

    cout << "How many temps?";
    cin >> size;
    while(true)
        temp_ptr = new double[size];
    cout << temp_ptr << endl;
    delete [] temp_ptr;
    return 0;
}