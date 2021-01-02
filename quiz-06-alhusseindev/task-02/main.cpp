#include <iostream>
#include <random>
#include <fmt/format.h>
using namespace std;

int main()
{
    // 2 points
    //
    // Select the line of code that correctly creates a
    // uniform distribution over the range -1.5 and 1.5
    //
    // --------------------------------------------------

    // std::uniform_int_distribution<int> dis(-1.5, 1.5);

    std::uniform_real_distribution<double> dis(-1.5, 1.5);

    // std::uniform_real_distribution<int> dis(-1.5, 1.5);

    // std::uniform_int_distribution<double> dis(-1.5, 1.5);

    // --------------------------------------------------
    
    mt19937_64 eng(1337);
    for (int i = 0; i < 10; ++i)
    {
        cout << dis(eng) << endl;
    }
}
