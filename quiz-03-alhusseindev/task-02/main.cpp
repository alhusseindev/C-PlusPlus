#include <iostream>
using namespace std;

// 2 points
//
// Uncomment the correct forward declaration!
//
// --------------------------------------------------

// void do_something(double x, double y);

// double do_something(double x, double y)

double do_something(double x, double y);

// double do_something(x, y);

// --------------------------------------------------

int main()
{
    double x = do_something(10.0, 3.0);
    cout << x << endl;
}

double do_something(double x, double y)
{
    return 900.0 * x + y - 2.99;
}
