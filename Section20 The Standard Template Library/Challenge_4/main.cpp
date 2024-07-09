// Section 20
// Challenge 4
// Identifying palindrome strings using a stack and queue
#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>

std::string clean(const std::string &s) {
    std::string n_s{};
    for(int i = 0; i < s.length(); i++) {
        if(std::isalpha(s.at(i))) {
            n_s += s.at(i);
        }
    }
    return n_s;
}

bool is_palindrome(const std::string& s)
{
    // You must implement this function.
    // Since we are learning the STL - use a stack and a queue to solve the problem.
    std::string clean_s = clean(s);
    std::queue<char> que;
    std::stack<char> stk;
    for(int i = 0; i < s.length(); i++) {
        char c = s.at(i);
        if(std::isalpha(c)) {
            que.emplace(tolower(c));
            stk.emplace(tolower(c));
        }
    }
    while (!que.empty() && !stk.empty()) {
        if(stk.top() != que.front()) return false;
        stk.pop();
        que.pop();
    }
    return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(9) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(9) << std::left << is_palindrome(s) << " " << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}