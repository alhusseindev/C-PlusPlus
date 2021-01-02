#include <iostream>
using namespace std;

class Foo
{
public:

    // 2 point
    //
    // Select the line that correctly indicates that a
    // default constructor is to be created for us.
    // ------------------------------------------------

    // Foo();

    // Foo Foo() = default;

    // Foo;

    Foo() = default;

    // ------------------------------------------------

    Foo(int q, int w, int e): a(q), b(w), c(e) {}

    int a = 10;
    int b = 100;
    int c = 1000;

};


int main()
{
    Foo f;
    cout << f.a << endl;
    cout << f.b << endl;
    cout << f.c << endl;
}
