#include <iostream>
#include <cmath>

int main(){
    std::cout << "Enter a radius:" << std::endl;
    
    double r;
    //Accepting user input
    std::cin >> r;

    //Equations
    double v = 4 * M_PI * std::pow(r, 3) / 3;
    double a = 4 * M_PI * std::pow(r, 2);

    //printing
    std::cout << v << std::endl;
    std::cout << a << std::endl;




}