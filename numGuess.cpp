// Copyright 2025 Gustav I. All rights reserved.
// Made by: Gustav I.
// Made on 2025-03-18
// This program executes a number guessing game in C++.

#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
#include <iostream>

int main() {
    int number_guess;

    // Random number generator
    std::srand(std::time(0));

    // Get user's guess
    std::cout << "Guess a number (0-9): ";
    std::cin >> number_guess;
    std::cout << std::endl;

    // Computer chooses a random number
    int chosen_number = std::rand() % 10;  // Random number between 0 and 9

    // Check if the number is right or wrong
    if (number_guess == chosen_number) {
        std::cout << "You got the right number!" << std::endl;
    } else {
        std::cout << "You did not get the right number." << std::endl;
        std::cout << "The correct number was: " << chosen_number << std::endl;
    }

    return 0;
}
