#ifndef __INSUFFICIENT_FUNDS_EXCEPTION_H__
#define __INSUFFICIENT_FUNDS_EXCEPTION_H__
#include <exception>

class Insufficient_Funds_Exception : public std::exception {
public:
    Insufficient_Funds_Exception() noexcept = default;
    ~Insufficient_Funds_Exception() noexcept = default;
    virtual const char* what() const noexcept override {
        return "Insufficient fund detected";
    }
};

#endif