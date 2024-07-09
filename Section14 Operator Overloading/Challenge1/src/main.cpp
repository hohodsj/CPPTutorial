#include <iostream>
#include <assert.h>
#include "Mystring.h"
// https://github.com/Kwounsu/VSCode_cpp/blob/main/tasks.json
using namespace std;

int main()
{
    // Mystring no args
    Mystring empty;
    empty.display();
    assert(empty.get_length() == 0);
    assert(std::strcmp(empty.get_str(), "") == 0);

    Mystring param1("Param1");
    param1.display();
    assert(param1.get_length() == 6);
    assert(std::strcmp(param1.get_str(), "Param1") == 0);

    Mystring cp_constructor(param1);
    cp_constructor.display();
    assert(cp_constructor.get_length() == 6);
    assert(std::strcmp(cp_constructor.get_str(), "Param1") == 0);

    Mystring mv_constructor(Mystring{"Target"});
    mv_constructor.display();

    Mystring copy_mv_constructor = "SOME OTHER TARGET";
    copy_mv_constructor.display();

    Mystring lower = - copy_mv_constructor;
    assert(lower == "some other target");
    lower.display();

    Mystring concat = lower + " another target";
    assert(concat == "some other target another target");
    concat.display();

    Mystring same = lower + " another target";
    assert(concat == same);

    Mystring different = same + " Not!";
    assert(same != different);

    Mystring s = "s";
    Mystring a = "a";
    s += a;
    assert(s == "sa");

    Mystring aaa = a * 3;
    assert(aaa == "aaa");

    s *= 3;
    assert(s == "sasasa");

    Mystring A = ++a;
    assert(A == "A");

    Mystring AAA = aaa++;
    assert(AAA == "aaa");
    assert(aaa == "AAA");
}