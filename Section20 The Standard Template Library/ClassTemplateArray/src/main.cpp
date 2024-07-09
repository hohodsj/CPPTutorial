#include <iostream>
#include <string>

template<typename T, int N>
class Array {
    int size {N}; // How do we get N?
    T values[N];

    friend std::ostream &operator<<(std::ostream &os, const Array<T,N> &arr) {
        os << "[ ";
        for (const auto &val:arr.values)
            os << val << " ";
        os << "]" << std::endl;
        return os;
    }

public:
    Array() = default;
    Array(T init_value) {
        for(auto &item: values)
            item = init_value;
    }
    void fill(T val) {
        for (auto &item: values)
            item = val;
    }
    int get_size() const {
        return size;
    }

    // overloaded subscript operator for easy use
    T &operator[](int index) {
        return values[index];
    }
};


int main()
{
    Array<int, 5> nums;
    std::cout << "The sixe of num is: " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    nums.fill(0);
    std::cout << "The sixe of num is: " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    nums.fill(10);
    std::cout << "The sixe of num is: " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    nums[0] = 1000;
    nums[3] = 2000;
    std::cout << nums << std::endl;

    Array<int, 100> nums2 {1};
    std::cout << "The size of num2 is: " << nums2.get_size() << std::endl;
    std::cout << nums2 << std::endl;

    Array<std::string, 10> strings(std::string{"Frank"});
    std::cout << "The size of strings is: " << strings.get_size() << std::endl;
    std::cout << strings << std::endl;

    strings[0] = std::string{"Larry"};
    std::cout << "The size of strings is: " << strings.get_size() << std::endl;
    std::cout << strings << std::endl;

    strings.fill("X");
    std::cout << "The size of strings is: " << strings.get_size() << std::endl;
    std::cout << strings << std::endl;
    
    return 0;
}