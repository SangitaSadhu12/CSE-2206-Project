# CSE-2206-Project
SD-1-Guess the number game
#  Guess the Number (C++)

Welcome to **Guess the Number**, a simple C++ console game where the player tries to guess a randomly generated number between 1 and 100. The game provides feedback for each guess, helping you get closer to the correct number.

## Features

- Random number generation (between 1 and 100)
- Input from the user
- Feedback: "Too high", "Too low", or "Correct!"
- Counts and displays the number of attempts

##  How to Compile and Run

### Using g++ (Linux/macOS/Windows with MinGW):
Using Visual Studio (Windows):

Open the .cpp file in a new project.

Build and run the project.
Example Output
=== Welcome to Guess the Number! ===
I'm thinking of a number between 1 and 100.
Enter your guess: 50
Too high! Try again.
Enter your guess: 25
Too low! Try again.
Enter your guess: 37
Congratulations! You guessed it in 3 tries.
 How It Works

Uses std::rand() and std::srand() from <cstdlib> to generate a random number.

Uses <ctime> to seed the random generator based on the current time.

Prompts the user to guess until they match the secret number.

 Contributing

Feel free to fork the repository, improve the game (add difficulty levels, guess history, etc.), and submit a pull request.
