#include <iostream>
// https://github.com/Kwounsu/VSCode_cpp/blob/main/tasks.json
using namespace std;

int main()
{
    int* arr = new int[10];
    for(int i = 0; i < 10; i++) {
        *(arr+i) = i;
    }
    cout << *arr << endl;
}