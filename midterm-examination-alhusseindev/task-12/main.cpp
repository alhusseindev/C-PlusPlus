#include <iostream>
#include <cmath>

int main(){

    std::cout << "Enter an angle:" << std::endl;

    //variable d (degrees)
    double d;
    //Getting user input
    std::cin >> d;

    //Converting degrees to radians
    double r = d * M_PI / 180.0;

    //printing out the value produced
    //by calling std::cos  on that converted angle
    std::cout << std::cos(r) << std::endl;

}