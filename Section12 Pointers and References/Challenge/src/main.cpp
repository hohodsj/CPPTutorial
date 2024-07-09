#include <iostream>
#include <vector>
#include <string>

using namespace std;

// void print(const int* arr, int size) {
//     for(size_t i{0}; i < size; i++)
//         cout << *(arr+i) << " ";
//     cout << endl;
// }

void print(const int* arr, int size) {
    for(size_t i{0}; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int* apply_all(int* arr1, int size1, int* arr2, int size2) {
    int *res = new int[size1 * size2]{};
    int ctr = 0;
    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            res[ctr++] = arr1[i] * arr2[j];
        }
    }
    return res;
}

int main()
{
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    cout << "Array 1: ";
    print(array1, 5);

    cout << "Array 2: ";
    print(array2, 3);

    int *result = apply_all(array1, 5, array2, 3);
    cout << "Result: ";
    print(result, 15);

    delete [] result;
}