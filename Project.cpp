#include <iostream>
#include <cstdlib>   
#include <ctime>     

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));
    int secretNumber = std::rand() % 100 + 1;
    int guess;
    int attempts = 0;

    std::cout << "=== Welcome to Guess the Number! ===\n";
    std::cout << "I'm thinking of a number between 1 and 100.\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << " Congratulations! You guessed it in " << attempts << " tries.\n";
        }

    } while (guess != secretNumber);

    return 0;
}
