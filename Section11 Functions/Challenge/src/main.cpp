#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

void print_numbers(const vector<int>& v);
bool add_number(vector<int>& v, int num);
void display_mean(const vector<int>& v);
void display_small(const vector<int>& v);
void display_large(const vector<int>& v);
int main()
{
    vector<int> nums{};
    int choice = 1;
    while(choice < 6 && choice > 0) {
        cout << "current choice: " << choice << endl;
        cout<<"1.Print Numbers\n2.Add a number\n3.Display Mean\n4.Display Small\n5.Display Large\n6.Quit\n";
        cin>>choice;
        switch(choice) {
            case 1:
                print_numbers(nums);
                break;
            case 2:
                cout << "Enter your number: ";
                int num;
                cin >> num;
                add_number(nums, num);
                break;
            case 3:
                display_mean(nums);
                break;
            case 4:
                display_small(nums);
                break;
            case 5:
                display_large(nums);
                break;
        }
    }
    
}

void print_numbers(const vector<int>& v) {
    cout << "Here are your numbers: ";
    for(auto num:v) cout << num << " ";
    cout<<endl;
}

bool add_number(vector<int>& v, int num) {
    try{
        v.push_back(num);
        return true;
    } catch(exception e) {
        return false;
    }
    
}

void display_mean(const vector<int>& v) {
    int sum = 0;
    for(int i = 0; i < v.size(); i++) {
        sum += v.at(i);
    }
    cout << "Mean = " << sum / static_cast<double>(v.size()) << endl;
}

void display_small(const vector<int>& v) {
    int small = v.at(0);
    for(auto num: v) {
        small = min(small, num);
    }
    cout << "Smallest = " << small << endl;
}

void display_large(const vector<int>& v) {
    int big = v.at(0);
    for(auto num: v) {
        big = max(big, num);
    }
    cout << "Largest = " << big << endl;
}
