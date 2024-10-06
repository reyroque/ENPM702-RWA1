/**
 * @file exercise1.cpp
 * @author Rey Roque-Perez (reyroque@umd.edu)
 * @brief
 * @version 0.1
 * @date 2024-09-17
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <iomanip>

int main() {
    // Initializing variables using uniform initialization
    int int_var{250};
    float float_var{987.654f};
    double double_var{543.210987};

    // Printing initial values using cout function from <iostream> header
    std::cout << "Initial int_var value: " << int_var << '\n';
    std::cout << "Initial float_var value: " << float_var << '\n';
    // Adjusting cout precision so all decimal places of the double are visible
    std::cout << "Initial double_var value: " << std::setprecision(15) << double_var << std::setprecision(8) << '\n';

    // Applying operations to modify values
    int_var -= 20;
    float_var *= 1.5;
    double_var /= 3;

    // Printing modified values using cout function from <iostream> header
    std::cout << "Modified int_var value: " << int_var << '\n';
    std::cout << "Modified float_var value: " << float_var << '\n';
    // Adjusting cout precision so all decimal places of the double are visible
    std::cout << "Modified double_var value: " << std::setprecision(15) << double_var << '\n';
}