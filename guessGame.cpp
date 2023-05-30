#include <iostream>

void guess_game();

int main(){
    guess_game();
    return 0;
}

void guess_game(){
    int secret_number = 50;
    int input_number = 0;
    int guess_count = 5;
    std::cout << "*****Welcome to the guess the number game.*****"<< std::endl;
    std::cout << "***You should guess the right number. You have 10 life...***"<< std::endl;
    std::cout << "Your game begins..."<< std::endl;
    while (input_number != secret_number && guess_count){
        if(guess_count < 5){
            std::cout << "Sorry, you are wrong. You have " << guess_count << " chance remaining." << std::endl;
            std::cout << "Guess the secret number again...";
        }
        else{
            std::cout << "Guess the secret number...";
        }
        std::cin >> input_number;   
        guess_count--;
    }
    if(input_number == secret_number){
        std::cout << "Congratulation!!! You guessed the right answer.."<< std::endl;
    }
    else{
        std::cout << "Sorry, you lost."<<std::endl;
    }
}