#include <iostream>
#include <queue>
#include <numeric>

template<typename T, class C>
void print_queue(std::priority_queue<T, std::vector<T>, C> pq) {
    while(!pq.empty()) {
        std::cout << pq.top() << std::endl;
        pq.pop();
    }
    std::cout << std::endl;
}

struct Comp {
    bool operator() (const int &a, const int &b) {
        return a > b;
    }
};

int main()
{
    std::vector<int> vec(10,0);
    std::iota(vec.begin(), vec.end(), 1);
    std::cout << "Default PQ behavior, rank from high to low" << std::endl;
    std::priority_queue<int> pq1(vec.begin(), vec.end());
    print_queue(pq1);

    std::cout << "Comparator a > b" << std::endl;
    std::priority_queue<int, std::vector<int>, Comp> pq2;
    for(int num: vec) pq2.push(num);
    print_queue(pq2);

}

