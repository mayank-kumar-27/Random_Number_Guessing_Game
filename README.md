# Random Number Guessing Game

<div align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg" alt="Language">
  <img src="https://img.shields.io/badge/Difficulty-Beginner-green.svg" alt="Difficulty">
  <img src="https://img.shields.io/badge/Category-Game-orange.svg" alt="Category">
  <img src="https://img.shields.io/badge/Status-Complete-brightgreen.svg" alt="Status">
</div>

## 📝 Description

This is a simple command-line number guessing game written in C. The program generates a random number between 1 and 100, and the player tries to guess it. After each guess, the program provides feedback whether the guess was too high or too low, until the player guesses the correct number.

<div align="center">
  <img src="https://raw.githubusercontent.com/username/random-number-game/main/screenshot.png" alt="Game Screenshot" width="70%">
</div>

## 🎮 How to Play

1. The program generates a random number between 1 and 100
2. Enter your guess when prompted
3. The program will tell you if your guess is too high or too low
4. Keep guessing until you find the correct number
5. The game will display how many attempts it took you to guess correctly

## 🔧 Features

- Random number generation between 1 and 100
- Interactive user interface through the command line
- Feedback after each guess
- Tracks the number of attempts
- Clear instructions and user guidance

## 💻 Technical Details

The program utilizes the following C programming concepts:

- Random number generation using `rand()` and `srand()`
- User input handling with `scanf()`
- Conditional statements (`if`, `else if`)
- Loop structures (`do-while`)
- Basic output formatting

## 🚀 How to Compile and Run

### Prerequisites
- GCC compiler or any C compiler

### Compilation
```bash
gcc -o guessing_game guessing_game.c
```

### Running the Program
```bash
./guessing_game
```

On Windows:
```cmd
guessing_game.exe
```

## 📋 Code Structure

```c
#include <stdio.h>   // For input/output functions
#include <stdlib.h>  // For random number generation
#include <time.h>    // For seeding the random number generator

int main()
{
    // Display welcome message
    // Generate random number
    // Start guessing loop
    // Provide feedback based on guesses
    // Display congratulations message with attempt count
    // Return 0 to indicate successful execution
}
```

## 🎯 Future Improvements

- Add difficulty levels (different ranges of numbers)
- Implement a scoring system based on number of attempts
- Add a time limit for guessing
- Create a high score system
- Add option for multiple rounds

## 🤝 Contributing

Feel free to fork this project and make improvements. Pull requests are welcome!

<div align="center">
  Created with ❤️ by Mayank Kumar
</div>
