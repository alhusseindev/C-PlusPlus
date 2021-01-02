#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> data;

    // 2 points
    //
    // Uncomment the correct method to add an element to
    // a vector!
    //
    // --------------------------------------------------

    // data.append(111);

    data.push_back(111);

    // data += 111;

    // data.add_element(111);

    // --------------------------------------------------

    cout << data[0] << endl;
}
