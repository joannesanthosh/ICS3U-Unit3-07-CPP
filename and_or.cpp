// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Joanne Santhosh
// Created on: Oct 2022
// This program checks your eligibility to date

#include <iostream>
#include <string>

int main() {
    // creating variables

    std::string userAgeAsString;
    int userAgeAsNumber;

    // input
    std::cout << "Enter your age: ";
    std::cin >> userAgeAsString;

    // process and output
    try {
        userAgeAsNumber = std::stoi(userAgeAsString);
        if (userAgeAsNumber >= 25 && userAgeAsNumber <= 40) {
            std::cout << "\nYou are eligible to date my grandchild."
            << std::endl;
        } else {
            std::cout << "\nYou are not eligible to date my grandchild."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid entry, "
                  << userAgeAsString << " is not an integer.";
    }
    std::cout << "\n\nDone.";
}
