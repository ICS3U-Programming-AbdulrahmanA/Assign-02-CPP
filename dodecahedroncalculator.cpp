// Copyright (c) 2025 Abdul All rights reserved.
//
// Created by: Abdul
// Date: 10/15/2025
// Dodecahedron calculator


#include <cmath>
#include <iomanip>
#include <iostream>
// cpplint said to use this?
#include <string>

int main() {
    // Display welcome message
    std::cout << "Dodecahedron Calculator\n";

    // Get edge length from user
    float a;
    std::cout << "Enter the edge length (a): ";
    std::cin >> a;

    // Ask user for units
    std::string units;
    std::cout << "Enter the units (e.g., cm, m, in): ";
    std::cin >> units;

    // Calculate surface area using dodecahedron formula
    float area = 3 * std::sqrt(25 + 10 * std::sqrt(5)) * std::pow(a, 2);

    // Calculate volume using dodecahedron formula
    float volume = (1.0 / 4.0) * (15 + 7 * std::sqrt(5)) * std::pow(a, 3);

    // Display results with units
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Surface Area: " << area << " " << units << "^2\n";
    std::cout << "Volume: " << volume << " " << units << "^3\n";

    // Big dodecahedron if statement
    if (volume > 1000) {
        std::cout << "That's a hefty dodecahedron!\n";
    }
    if (area > 1000) {
        std::cout << "That's a large dodecahedron!\n";
    }
}
