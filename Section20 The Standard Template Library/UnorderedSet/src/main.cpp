#include <iostream>
#include <unordered_set>

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
public:
    std::string name;
    int age;
    Person() : name{"Unknown"}, age{0} {}
    Person(std::string name, int age) 
        : name{name}, age{age}  {}
    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }
    
    bool operator==(const Person &rhs) const {
        return this -> name == rhs.name && this ->age == rhs.age;
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name << " : " << p.age;
    return os;
}

// Custom hash function
struct PersonHash {
    std::size_t operator()(const Person &p) const {
        return std::hash<std::string>()(p.name) ^ (std::hash<int>()(p.age) << 1);
    }
};

template <typename T>
void display(const std::unordered_set<T> &l) {
    std::cout << "[ ";
    for (const auto &elem: l) {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

template <typename T, class C>
void display(const std::unordered_set<T,C> &l) {
    std::cout << "[ ";
    for (const auto &elem: l) {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    // Unordered Sets
    std::cout << "\nTest1 =========================" << std::endl;
    std::unordered_set<int> s1 {1,4,3,5,2};
    display(s1);

    s1 = {1,2,3,1,1,2,2,3,3,4,5};
    display(s1);

    s1.insert(0);
    s1.insert(10);

    display(s1);

    if (s1.count(10))
        std::cout << "10 is in the set" << std::endl;
    else
        std::cout << "10 is not in the set" << std::endl;
    
    auto it = s1.find(5);
    if (it != s1.end())
        std::cout << "Found: " << *it << std::endl;
    
    s1.clear();
    display(s1);
}

void test2() {
    std::cout << "\nTest2 =========================" << std::endl;
    std::unordered_set<Person, PersonHash> stooges {
        {"Larry", 1},
        {"Moe", 2},
        {"Curly", 3},
    };

    display(stooges); // Note the order of display~ operator <

    stooges.emplace("James", 50);
    display(stooges);

    stooges.emplace("Frank", 50);
    display(stooges);

    auto it = stooges.find(Person{"Moe", 2});
    if (it != stooges.end())
        stooges.erase(it);
    
    display(stooges);

    it = stooges.find(Person("XXX", 50)); // Will not find anyone
    if (it != stooges.end())
        stooges.erase(it);
    display(stooges);
}

void test3() {
    std::cout << "\nTest3 =========================" << std::endl;
    std::unordered_set<std::string> s {"A", "B", "C"};
    display(s);

    auto result = s.insert("D"); // auto = pair<iterator, bool>
    display(s);

    std::cout << std::boolalpha;
    std::cout << "first: " << *(result.first) << std::endl; 
    std::cout << "second: " << result.second << std::endl;
}

int main()
{
    test1();
    test2();
    test3();
    return 0;
}