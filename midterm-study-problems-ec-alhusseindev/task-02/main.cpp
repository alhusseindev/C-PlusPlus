#include <iostream>
#include <iomanip>

int factorial(int num){
    if(num == 0 || num == 1){
        return 1;
    }else{
        return num * factorial(num - 1);
    }
}
int main(){

    int fact_num_entered;
    std::cout << "Enter a number:" << std::endl;
    std::cin >> fact_num_entered;

    //getting factorial of the number
    int factorial_num = factorial(fact_num_entered);

    //printing the number
    
    std::cout <<factorial_num << std::endl;



}