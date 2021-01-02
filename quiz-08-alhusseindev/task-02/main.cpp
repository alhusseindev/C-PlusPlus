#include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> v;

    // 2 point
    //
    // Select the line of code that properly updates
    // the capacity of the vector to 100
    //
    // ------------------------------------------------

    // v.capacity = 100;

    v.reserve(100);

    // v.push_back(100);

    // v.resize(100);

    // ------------------------------------------------
    
    std::cout << v.size() << std::endl;
    std::cout << v.capacity() << std::endl;
}
