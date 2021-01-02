#include <iostream>
using namespace std;

class counter
{
public:
    void record() {
        std::cout << "recorded " << i << " times" << std::endl;
        i++;
    }

private:
    int i = 1;
};

int main()
{
    counter my_counter;

    // 2 points
    //
    // Call the record function from our counter
    // 100 times.
    //
    // ------------------------------------------------
    int count = 0;
    while(count < 100){
        my_counter.record();
        count++;
    }

    // ------------------------------------------------
}
