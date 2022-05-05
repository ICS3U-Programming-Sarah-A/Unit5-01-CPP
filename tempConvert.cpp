// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: May, 5th, 2022
// This program asks the user to enter a temperature in celsius. It then
// converts the temperature from celsius to fahrenheit using a function.
#include <iostream>
#include <iomanip>


void CalculateFarenheit() {
    // declare variables.
    float userCelFloat;
    float farenheitTemp;
    std::string userCelString;

    // get input from user
    std::cout << "Enter the temperature (°C): ";
    std::cin >> userCelString;

    try {
        // convert from string to float
        userCelFloat = std::stof(userCelString);

        // calculates the temperature in fahrenheit.
        farenheitTemp = (9.0/5.0) * userCelFloat + 32;

        // rounds & displays temperature to user.
        std::cout << std::fixed << std::setprecision(1) << userCelFloat;
        std::cout << "°C is equal to " << std::fixed;
        std::cout << std::setprecision(1) << farenheitTemp << "°F\n";

    // checks to see if user entered a valid number.
    } catch (std::invalid_argument) {
        std::cout << "Please enter a valid celsius value.\n";
        std::cout << "" << std::endl;
    }
}

int main() {
    // calls function
    CalculateFarenheit();
}
