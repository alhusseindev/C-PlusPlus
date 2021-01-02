#include <iostream>
using namespace std;

class Foo
{
public:
    Foo(int q, int w, int e):
        a(q * 3),
        b(w * 37),
        c(e * 111)
    {}

    int a;
    int b;
    int c;
};


int main()
{
    // 4 points
    //
    // Create a Foo object named f by calling its 
    // constructor with the numbers 1, 3, and 6
    //
    // ----------------------------------------------------
    Foo f(1,3,6);

    // ----------------------------------------------------

    std::cout << f.a << std::endl;
    std::cout << f.b << std::endl;
    std::cout << f.c << std::endl;
}
