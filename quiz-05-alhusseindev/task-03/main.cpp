#include <fstream>
#include <string>
#include <fmt/format.h>
using namespace std;
using namespace std;

int main()
{
    // 2 point
    //
    // Select the line of code that correctly opens an
    // output file with the name "data.txt "for us to
    // write data to!
    //
    // --------------------------------------------------

    // ofstream f;

    ofstream f("data.txt");

    // ifstream f;

    // ifstream f("data.txt");

    // --------------------------------------------------

    f << "bears, beets, battlestar galactica" << endl;
}
