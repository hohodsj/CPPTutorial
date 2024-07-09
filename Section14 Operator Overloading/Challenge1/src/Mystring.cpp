#include <iostream>
#include <cstring>
#include "Mystring.h"

Mystring::Mystring()
:str{nullptr} {
    str = new char[1];
    str[0] = '\0';
}

Mystring::Mystring(const char *s)
    :str{nullptr}{
        std::cout << "Init with cstring "<< s << std::endl;
        // in case if someone pass in a null string
        if(s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s) + 1];
            std::strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) {
    std::cout << "Copying " << source.str << std::endl;
    if(this != &source) {
        this->str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
    }
}

// Move constructor
Mystring::Mystring(Mystring &&source) 
 : str{source.str} {
    std::cout << "Moving " << str << std::endl;
    source.str = nullptr;
}

// Destructor
Mystring::~Mystring() {
    std::cout << "Removing " << str << std::endl;
    delete[] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Copy assignment " << rhs.str << std::endl;
    if(this == &rhs) {
        return *this;
    }
    delete[] this->str;
    this->str = new char[rhs.get_length() + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

void Mystring::display() const{
    if(str == nullptr) {
        std::cout << "No string" << std::endl;
    } else {
        std::cout << str << std::endl; // can be print because of c style string ends with '\0'
    }
}

int Mystring::get_length() const {
    return std::strlen(str);
}

const char* Mystring::get_str() const {
    return str;
}

Mystring Mystring::operator-() const {
    char* tmp = new char[std::strlen(this -> str) + 1];
    std::strcpy(tmp, this -> str);
    for(int i = 0; i < this -> get_length(); i++) {
        tmp[i] = std::tolower(tmp[i]);
    }
    Mystring new_str (tmp);
    delete [] tmp;
    return new_str;
}

Mystring Mystring::operator+(const Mystring &rhs) const {
    char* tmp = new char[this->get_length() + rhs.get_length() + 1];
    std::strcpy(tmp, str);
    std::strcat(tmp, rhs.str);
    Mystring new_str (tmp);
    delete[] tmp;
    return new_str;
}

bool Mystring::operator==(const Mystring &rhs) const {
    return std::strcmp(str, rhs.get_str()) == 0;
}

bool Mystring::operator!=(const Mystring &rhs) const {
    return std::strcmp(str, rhs.get_str()) != 0;
}

Mystring& Mystring::operator+=(const Mystring &rhs) {
    char * tmp = new char[this -> get_length() + rhs.get_length() + 1];
    std::strcpy(tmp, str);
    std::strcat(tmp, rhs.get_str());
    delete str;
    str = tmp;
    return *this;
}

Mystring Mystring::operator*(int n) const{
    char * tmp = new char[this->get_length() * n + 1];
    for(int i = 0; i < n; i++) {
        std:strcat(tmp, str);
    }
    Mystring new_str(tmp);
    delete [] tmp;
    return new_str;
}

Mystring& Mystring::operator*=(int n) {
    *this = *this * n;
    return *this;
}

Mystring& Mystring::operator++() {
    for(int i = 0; i < this -> get_length(); i++) {
        *(str + i) = std::toupper(str[i]);
    }
    return *this;
}

Mystring Mystring::operator++(int) {
    Mystring tmp (*this);
    ++*this;
    return tmp;
}