#include <iostream>
#include <deque>


template <typename T>
void display(std::deque<T> &d) {
    auto it = d.begin();
    std::cout << "[";
    while(it != d.end()) {
        std::cout << *it << " ";
        it++;
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "\nTest1 =========================" << std::endl;

    std::deque<int> d {1,2,3,4,5};
    display(d);

    d = {2,4,5,6};
    display(d);

    std::deque<int> d1 (10,100); // ten 100s in the deque
    display(d1);

    d[0] = 100;
    d.at(1) = 200;
    display(d);
}

void test2() {
    // push and pops
    std::cout << "\nTest2 =========================" << std::endl;

    std::deque<int> d {0,0,0};
    display(d);

    d.push_back(10);
    d.push_back(20);
    display(d);

    d.push_back(100);
    d.push_back(200);
    display(d);

    std::cout << "Front: " << d.front() << std::endl;
    std::cout << "Back: " << d.back() << std::endl;
    std::cout << "Size: " << d.size() << std::endl;

    d.pop_back();
    d.pop_front();
    display(d);
}

void test3() {
    // insert all even numbers into the back of a deque and all 
    // odd numbers into the front
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;
    for(const auto &num: vec) {
        if(num%2 == 0)
            d.push_back(num);
        else
            d.push_front(num);
    }
    display(d);
}

void test4() {
    // push front vs. back ordering
    std::cout << "\nTest4 =========================" << std::endl;

    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;

    for (const auto &elem: vec) {
        d.push_front(elem);
    }

    display(d);
    d.clear();

    for (const auto &elem: vec) {
        d.push_back(elem);
    }
    display(d);
}

void test5() {
    // Same as test4 using std::copy
    std::cout << "\nTest5 =========================" << std::endl;

    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;

    std::copy(vec.begin(), vec.end(), std::back_inserter(d));
    display(d);

    d.clear();

    std::copy(vec.begin(), vec.end(), std::front_inserter(d));
    display(d);
}

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();

    return 0;
}