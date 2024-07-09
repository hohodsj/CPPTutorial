#ifndef __ILLEGAL_BALANCE_EXCEPTION_H__
#define __ILLEGAL_BALANCE_EXCEPTION_H__
#include <exception>
#include <cstring>

class IllegalBalanceException : public std::exception
{
public:
    IllegalBalanceException() noexcept{}
    ~IllegalBalanceException() noexcept{}
    virtual const char* what() const noexcept override {
        return "Illegal balance detected";
    }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
