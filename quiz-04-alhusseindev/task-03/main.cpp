#include <iostream>
using namespace std;

// 2 points
//
// Uncomment the function that correctly modifies the
// input variable by reference. Uncomment all 4 lines
// for an answer!
//
// --------------------------------------------------

// void f(int x)
// {
//     x = 10;
// }

// void f(int *x)
// {
//     x = 10;
// }

// void f(int &x)
// {
//     x = 10;
// }

int& f(int &x)
{
    x = 10;
}

// --------------------------------------------------

int main()
{
    int a = 0;
    f(a);
    cout << a << endl;
}
