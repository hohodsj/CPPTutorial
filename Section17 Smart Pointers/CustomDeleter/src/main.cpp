#include <iostream>
#include <memory>

using namespace std;

class Test {
private:
    int data;
public:
    Test(): data{0} { std::cout<<"\tTest constructor (" << data << ")" << std::endl; }
    Test(int data): data{data} {std::cout << "\tTest constructor (" << data << ")" << std::endl; }
    int get_data() const { return data; }
    ~Test() { std::cout << "\tTest destructor(" << data << ")" << std::endl; }
};

void my_delete(Test *ptr) { // Note the RAW POINTER was being passed in
    std::cout << "\tUsing my custom function deleter" << std::endl;
    delete ptr;
}

int main()
{
    {
        // Using a function, cannot use make_share
        std::shared_ptr<Test> ptr1 {new Test{100}, my_delete};
    }

    std::cout << "=====" << std::endl;
    {
        std::shared_ptr<Test> ptr2 (new Test{1000}, 
        [] (Test *ptr) {
            std::cout << "\tUsing my custom lambda deleter" << std::endl;
            delete ptr;
        });
    }

    return 0;
}