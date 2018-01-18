/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 01/16/2018
 ** Description: This program prompts the user to enter an integer
 ** representing a value in cents, then calculates the optimal amount
 ** of change that value represents in each denomination.
 *********************************************************************/

#include <iostream>

int main()
{
    // Define variables prior to user input
    int inputChange, remainingChange, outputQuarters, outputDimes, outputNickels, outputPennies;
    // Prompt the user for the amount of change
    std::cout << "Please enter an amount in cents less than a dollar." << std::endl;
    std::cin >> inputChange;
    // Calculate the change in quarters, dimes, nickels and pennies with integer division.
    // After each calculation, decrement the amount of remaining change by the
    // amount of change in the previous denomination using modular arithmetic.
    outputQuarters = inputChange / 25;
    remainingChange = inputChange % 25;

    outputDimes = remainingChange / 10;
    remainingChange = remainingChange % 10;

    outputNickels = remainingChange / 5;
    remainingChange = remainingChange % 5;

    outputPennies = remainingChange;
    // For consistency, we'll calculate remainingChange, which should now be equal to 0
    remainingChange = remainingChange % 1;

    // Display the change by denomination to the user
    std::cout << "Your change will be:" << std::endl;
    std::cout << "Q: " << outputQuarters << std::endl;
    std::cout << "D: " << outputDimes << std::endl;
    std::cout << "N: " << outputNickels << std::endl;
    std::cout << "P: " << outputPennies << std::endl;
    return 0;
}
