// Copyright (c) 2021 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Oct, 11, 2023
// This program asks the user for the subtotal and then
// displays the tax and total cost

#include <iostream>
// Include this for std::setprecision
#include <cmath>
#include <iomanip>

int main() {
    // declare HST
    const float HST = 0.05;

    // declare subtotal
    float subtotal;

    // get the subtotal(item price) from the user and display message
    std::cout << "// This program asks the user for the subtotal and then ";
    std::cout << "\n displays the tax and total cost";
    std::cout << "Enter the subtotal of your item: ";
    std::cin >> subtotal;

    // calculate the tax and total
    float tax = subtotal * HST;
    float total = subtotal + tax;

    // display the subtotal, tax and total
    std::cout << "\n";
    std::cout << "The subtotal is $" << std::fixed << std::setprecision(2)
              << subtotal << std::endl;
    std::cout << "The tax is $" << std::fixed << std::setprecision(2)
              << tax << std::endl;
    std::cout << "The total is $" << std::fixed << std::setprecision(2)
              << total << std::endl;
}
