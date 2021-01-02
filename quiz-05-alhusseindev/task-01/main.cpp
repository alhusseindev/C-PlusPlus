#include <iostream>
#include <string>
#include <fmt/format.h>
using namespace std;

int main()
{
    double a = 22.0/7.0;

    // 1 point
    //
    // Select the line of code that correctly formats the
    // double with 10 decimal places!
    //
    // --------------------------------------------------

    // string s = fmt::format("{0:10f}", a);

    // string s = fmt::format("{1:.10f}", a);

    // string s = fmt::format("{10f}", a);

    string s = fmt::format("{0:.10f}", a);

    // --------------------------------------------------
    cout << s << endl;
}
