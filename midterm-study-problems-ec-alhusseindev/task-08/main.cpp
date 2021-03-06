#include <iostream>

//-----------------------------------------------------------------------------
// Answer within the comment-block here
class ball{
    public:
        double mass = 1.0;

    //Default Constructor
    ball(){

    }
    //another constructor (with parameters)
    ball(double m){
        mass = m;
    }

    double force(double acceleration){
        return mass * acceleration;
    }

    
};

// End of answer
//-----------------------------------------------------------------------------

int main()
{
    ball b1;
    std::cout << b1.force(1.0) << " " << b1.force(10.0) << " " << b1.force(20.0) << std::endl;

    ball b2(2.0);
    std::cout << b2.force(1.0) << " " << b2.force(10.0) << " " << b2.force(20.0) << std::endl;
}
