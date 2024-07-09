#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display(vector<vector<int>> vec) {
    for(int r = 0; r < vec.size(); r++) {
        for(int c = 0; c < vec[0].size(); c++) {
            cout << vec[r][c] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);

    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    display(vector_2d);
    vector1.at(0) = 100;
    display(vector_2d);
}

