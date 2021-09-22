// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Sept 2021
// This program creates a better number guessing game

#include <iostream>
#include <random>


int main() {
    // this function creates the game

    int numberGuessed;
    int someRandomNumber;




    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0 , 9);  // [0 , 9]
    someRandomNumber = idist(rgen);


    // Input
    std::cout << "Enter the number between 0 - 9: ";
    std::cin >> numberGuessed;

    // Process
    if (numberGuessed == someRandomNumber) {
        std::cout << "You guessed correct!";
    } else {
        std::cout << "Incorrect, the number was " << someRandomNumber;
    }

    // Output
    std::cout << "" << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
