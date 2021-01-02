#include <iostream>
#include <random>
#include <fmt/format.h>
using namespace std;

int main()
{
    mt19937 eng(1337);

    for (int i = 0; i < 10; ++i)
    {
        // 1 point
        //
        // Select the line of code that correctly generates
        // a random number from the given engine.
        //
        // ------------------------------------------------

        auto r = eng();

        // auto r = eng;

        // auto r = eng(1337);

        // auto r = eng.random();

        // ------------------------------------------------

        cout << r << endl;
    }
}
