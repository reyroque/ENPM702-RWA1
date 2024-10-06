/**
 * @file exercise2.cpp
 * @author Rey Roque-Perez (reyroque@umd.edu)
 * @brief
 * @version 0.1
 * @date 2024-09-17
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>

int main() {
    // Initializing input variables using uniform initialization
    int input_one{};
    int input_two{};

    // Getting user inputs
    std::cout << "Enter the first number: ";
    std::cin >> input_one;
    std::cout << "Enter the second number: ";
    std::cin >> input_two;
    std::cout << "==============================" << '\n';

    // Addition
    std::cout << "Addition: " << input_one << " + " << input_two << " = " << input_one + input_two << '\n';

    // Substraction
    std::cout << "Substraction: " << input_one << " - " << input_two << " = " << input_one - input_two << '\n';

    // Multiplication
    std::cout << "Multiplication: " << input_one << " * " << input_two << " = " << input_one * input_two << '\n';

    // Error handling for division by zero
    // Included modulus here since x % 0 is undefined and will also throw an error
    if (input_two != 0){
        // Division
        std::cout << "Division: " << input_one << " / " << input_two << " = " << input_one / input_two << '\n';
        // Modulus
        std::cout << "Modulus: " << input_one << " % " << input_two << " = " << input_one % input_two << '\n';
    }
    else{
        // Division
        std::cout << "Division: " << "Cannot divide by zero!" << '\n';
        // Modulus
        std::cout << "Modulus: " << "Cannot divide by zero!" << '\n';
    }

}