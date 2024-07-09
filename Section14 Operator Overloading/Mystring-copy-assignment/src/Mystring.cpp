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

void Mystring::display() const {
    std::cout << str << ":" << get_length() << std::endl;
}
int Mystring::get_length() const {
    return std::strlen(str);
}

const char* Mystring::get_str() const {
    return str;
}
