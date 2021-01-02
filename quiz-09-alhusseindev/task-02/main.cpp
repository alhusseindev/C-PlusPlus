#include <iostream>
#include <vector>
using namespace std;


class data_wrapper
{
public:
    double get_data()
    {
        return x;
    }

private:
    double x = 3.141592;
};


int main()
{
    data_wrapper my_wrapper;

    // 4 points
    //
    // Get the print the data from the data_wrapper without
    // modifying the class definition.
    //
    // ----------------------------------------------------
    cout << my_wrapper.get_data() << endl;

    // ----------------------------------------------------
}
