// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: May 2022
// This program finds the volume of a cylinder

#include <iostream>
#include <string>
#include <random>
#include <array>

template<size_t N>
float Process(std::array<int, N> randomNumbers) {
    // this function calculates the average

    int total = 0;
    float average;

    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        total += randomNumbers[loopCounter];
    }
    average = total / 10.0;

    return average;
}


main() {
    // this function generates the values

    int number;
    std::array<int, 10> randomNumbers;
    float answer;

    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(0, 100);  // [0, 100]
        number = idist(rgen);
        randomNumbers[loopCounter] = number;
        std::cout << "Random number " << loopCounter + 1 << ": " << number
        << std::endl;
    }
    answer = Process(randomNumbers);
    std::cout << "" << std::endl;
    std::cout << "The average of these numbers is: " << answer << std::endl;
}
