#include <iostream>
using namespace std;

int main()
{
    double x = 100.0;
    double y = 100.0;

    bool have_same_address = 
    // 2 point
    //
    // Select the comparison that properly checks if
    // two variables share the same memory address
    // ------------------------------------------------

    // x == y;

    // *x == *y;

    &x == &y;

    // &x == nullptr && &y == nullptr;

    // ------------------------------------------------

    cout << have_same_address << endl;
}
