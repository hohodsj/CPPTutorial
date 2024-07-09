#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
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

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif