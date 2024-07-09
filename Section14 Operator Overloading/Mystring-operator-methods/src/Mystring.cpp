#include <cstring>
#include <iostream>
#include "Mystring.h"

Mystring::Mystring()
    :str{nullptr}{
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *s)
    :str{nullptr}{
        // in case if someone pass in a null string
        if(s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s) + 1];
            std::strcpy(str, s);
        }
}

Mystring::Mystring(const Mystring &source)
    :str{nullptr} {
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
    }

Mystring::Mystring(Mystring &&source)
    :str(source.str) {
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
    }

Mystring::~Mystring() {
    delete [] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Copy assignment" << std::endl;
    if(this == &rhs) {
        return *this;
    }
    delete [] str;
    str = new char[rhs.get_length()];
    std::strcpy(str, rhs.get_str());
    return *this;
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs) {
    std::cout << "Move assignment" << std::endl;
    if(this == &rhs) {
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Equality
bool Mystring::operator==(const Mystring &rhs) const {
    return std::strcmp(this->str, rhs.str) == 0;
}

// Make lowercase
Mystring Mystring::operator-() const {
    char *buff = new char[std::strlen(this -> str) + 1];
    std::strcpy(buff, str);
    for (size_t i = 0; i < std::strlen(buff); i++) {
        buff[i] = std::tolower(buff[i]);
    }
    Mystring tmp {buff};
    delete [] buff;
    return tmp;
}

// Concatenate
Mystring Mystring::operator+(const Mystring &rhs) const {
    char* buff = new char[std::strlen(this -> str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring tmp {buff};
    delete [] buff;
    return tmp;
}

void Mystring::display() const {
    std::cout << str << ":" << get_length() << std::endl;
}
int Mystring::get_length() const {
    return std::strlen(str);
}

const char* Mystring::get_str() const {
    return str;
}
