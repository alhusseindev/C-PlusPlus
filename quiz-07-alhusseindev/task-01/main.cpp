#include <iostream>
#include <type_traits>
using namespace std;

int main()
{
    double x = 100.0;

    // 1 point
    //
    // Select the line of code that creates a pointer
    // called p that points to x;
    //
    // ------------------------------------------------

    // double p = &x;

    double *p = &x;

    // double &p = x;

    // double *p = *x;

    // ------------------------------------------------
    cout << std::is_pointer<decltype(p)>::value << endl;
}
