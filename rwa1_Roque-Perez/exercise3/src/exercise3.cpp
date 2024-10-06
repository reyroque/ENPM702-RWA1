/**
 * @file exercise3.cpp
 * @author Rey Roque-Perez (reyroque@umd.edu)
 * @brief
 * @version 0.1
 * @date 2024-09-17
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <cctype>
#include <iostream>

int main() {
    // Variable storing input character
    char input_char{};

    // Getting user input
    std::cout << "Enter a character: ";
    std::cin >> input_char;

    // Checks if the character is a vowel
    if (input_char == 'a' || input_char == 'e' || input_char == 'i' || input_char == 'o' || input_char == 'u' ||
        input_char == 'A' || input_char == 'E' || input_char == 'I' || input_char == 'O' || input_char == 'U') {
        std::cout << input_char << " is a vowel." << '\n';
    } 
    else {
        std::cout << input_char << " is not a vowel." << '\n';
    }

    // Convert the character to uppercase if it is lowercase
    if (std::islower(input_char)) {
        std::cout << "Uppercase version: " << static_cast<char>(std::toupper(input_char)) << '\n';
    }
    // Convert the character to lowercase if it is uppercase
    else if (std::isupper(input_char)) {
        std::cout << "Lowercase version: " << static_cast<char>(std::tolower(input_char)) << '\n';
    }

    // Check if character is a digit
    if (std::isdigit(input_char)) {
        std::cout << input_char << " is a digit." << '\n';
    }

    // Check if character is a special symbol
    if (std::isalnum(input_char) == 0) {
        std::cout << input_char << " is a special symbol." << '\n';
    }
}