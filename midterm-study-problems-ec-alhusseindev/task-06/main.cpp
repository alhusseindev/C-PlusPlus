#include <iostream>
#include <random>

int main(){
    //creating seed
    std::mt19937_64 engine(9001);

    //creating random distribution
    std::uniform_int_distribution<int> dis(-10, 10);

    for(int i = 0; i < 5; ++i){
        std::cout << dis(engine) << std::endl;
    }


}