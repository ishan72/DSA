#include <iostream>

int exponent(int num, int power);
int main(){
    std::cout << "Output is: " << exponent(2,4)<< std::endl;
    return 0;
}

int exponent(int num, int power){
    int main_number = num;
    for(int i = 1; i < power; i++){
        main_number = main_number * num;
    }
    return main_number;
} 