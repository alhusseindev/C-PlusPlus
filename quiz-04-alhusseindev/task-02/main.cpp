#include <iostream>
using namespace std;

int main()
{
    double my_number = 100.0;
    double &r = my_number;

    r += 50.0;

    // 2 points
    //
    // Uncomment the variable that shares the same value
    // as my_number
    //
    // --------------------------------------------------

    // double a = 50.0;

    // double a = 100.0;

    double a = 150.0;

    // double a = 0.0;

    // --------------------------------------------------

    cout << (my_number == a) << endl;
}
