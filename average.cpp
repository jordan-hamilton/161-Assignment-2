/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 01/16/2018
 ** Description: This program prompts the user to input five numbers,
 ** calculates the average, then outputs the result to the screen.
 *********************************************************************/

#include <iostream>

int main()
{
    // Define variables prior to user input
    double inputNumber1, inputNumber2, inputNumber3, inputNumber4, inputNumber5, average;
    // Prompt for number entry
    std::cout << "Please enter five numbers." << std::endl;
    std::cin >> inputNumber1;
    std::cin >> inputNumber2;
    std::cin >> inputNumber3;
    std::cin >> inputNumber4;
    std::cin >> inputNumber5;
    // Calculate the average of the entered numbers
    average = (inputNumber1 + inputNumber2 + inputNumber3 + inputNumber4 + inputNumber5) / 5;
    // Display the calculated average to the user
    std::cout << "The average of those numbers is:" << std::endl;
    std::cout << average << std::endl;

    return 0;
}
