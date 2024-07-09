#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &is, Mystring &rhs);
private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();

    Mystring &operator=(const Mystring& rhs); // Copy assignment
    Mystring &operator=(Mystring &&rhs); // Move assignment

    Mystring operator-() const;  // Make lowercase 
    Mystring operator+(const Mystring &rhs) const; // concatenate
    bool operator==(const Mystring &rhs) const;

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif