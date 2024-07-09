#include <iostream>
#include <deque>
#include <ctype.h>
#include <assert.h>
using namespace std;

bool is_palindrome(const std::string &s) {
    std::deque<char> dq;
    std::copy_if(s.begin(), s.end(), std::back_inserter(dq), [](char c) { return std::isalpha(c);});
    while(dq.size() > 1) {
        if(std::tolower(dq.front()) != std::tolower(dq.back())) {
            return false;
        }
        dq.pop_front();
        dq.pop_back();
    }
    return true;
}

int main()
{
    assert(is_palindrome("aba"));

    assert(!is_palindrome("abb"));
}