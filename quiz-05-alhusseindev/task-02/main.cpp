#include <iostream>
#include <string>
#include <fmt/format.h>
using namespace std;

int main()
{
    int a = 1337;
    string b = "Dwight Schrute";

    // 2 point
    //
    // Select the line of code that correctly formats the
    // the string, and then the int.
    //
    // --------------------------------------------------

    // string s = fmt::format("{0}: employee ID {1}", a);

    // string s = fmt::format("{0}: employee ID {1}", b);

    // string s = fmt::format("{0}: employee ID {1}", a, b);

    string s = fmt::format("{0}: employee ID {1}", b, a);

    // --------------------------------------------------
    cout << s << endl;
}
