#include <iostream>
#include <random>
#include <fmt/format.h>
using namespace std;

int main()
{
    // 2 points
    //
    // Select the line of code that correctly creates a
    // normal distribution with a mean of 10.0 and a
    // standard deviation of 1.0;
    //
    // --------------------------------------------------

    // std::normal_distribution<int> dis(10, 1.0);

    // std::normal_distribution<int> dis(10.0, 1.0);

    // std::normal_distribution<int> dis(10.0, 1);

    std::normal_distribution<double> dis(10.0, 1.0);

    // --------------------------------------------------
    
    mt19937_64 eng(1337);
    for (int i = 0; i < 10; ++i)
    {
        cout << dis(eng) << endl;
    }
}
