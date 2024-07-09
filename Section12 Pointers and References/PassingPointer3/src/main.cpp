#include <iostream>
#include <vector>
#include <string>

using namespace std;

// template <size_t N>

void display(const vector<string> *const v) {
    for(string s: *v) cout << s << endl;
    cout << endl;
}

// void display(int *array, int sentinel) {
//     while (*array != sentinel)
//         cout << *array++ << " ";
//     cout << endl;
// }

template <size_t N>
void display(int (&scores)[N], int sentinel) {
    size_t i = 0;
    while (i < N && scores[i] != sentinel) {
        cout << scores[i] << " ";
        i++;
    }
    cout << endl;
}


int main()
{
    // cout << "----------------------------" << endl;
    // vector<string> stooges {"Larry", "Moe", "Curly"};
    // display(&stooges);

    cout << "\n-----------------------" << endl;
    int scores[] {100, 98, 97, 79, 85, -1};
    display(scores, -1);

    return 0;
}