#include <iostream>
using namespace std;

// 2 point
//
// Select the function signature that properly
// passes a double by pointer.
//
// ------------------------------------------------

// void update(double x)

// void update(double &x)

void update(double *x)

// void update(double &&x)

// ------------------------------------------------
{
    *x += 123.0;
}


int main()
{
    double x = 100.0;
    update(&x);
    cout << x << endl;
}
