/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 01/16/2018
 ** Description: This program prompts the user to input a temperature
 ** in degrees Celsius, then converts that temperate to Fahrenheit.
 *********************************************************************/

#include <iostream>

int main()
{
    // Define temperature variables prior to user input
    double inputCelsius, outputFahrenheit;
    // Prompt the user for a temperature
    std::cout << "Please enter a Celsius temperature." << std::endl;
    std::cin >> inputCelsius;
    // Calculate the temperature in degrees Fahrenheit
    // Avoid integer division with a type cast expression
    outputFahrenheit = (static_cast<double>(9) / 5 * inputCelsius) + 32;
    // Display the temperature in Fahrenheit to the user
    std::cout << "The equivalent Fahrenheit temperature is:" << std::endl;
    std::cout << outputFahrenheit << std::endl;

    return 0;
}
