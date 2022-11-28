// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 10 - 25 - 22
// Calculating the area of a triangle using arguments.

#include <iomanip>
#include <iostream>

// Defining the function that calculates the area using the arguments.
void calcArea(float Base, float Height) {
    float Area = (Base * Height) / 2;
    std::cout << std::fixed << std::setprecision(2) <<
    "The area of the triangle is " << Area << " cm.\n";
}

// The function that calls everything.
int main() {
    // Defining the variables.
    float userHeight;
    float userBase;

    // Try catch to get the input (dimensions of the triangle).
    try {
        std::cout << "What is the height of the triangle? (cm): ";
        std::cin >> userHeight;
        std::cout << "What is the base of the triangle? (cm): ";
        std::cin >> userBase;
    } catch (std::invalid_argument) {
        std::cout << "Invalid input";
    }
    if (userBase > 0 && userHeight > 0) {
        // Calling the function.
        calcArea(userBase, userHeight);
    } else {
        std::cout << "Invalid input (Enter a positive measurements.)";
    }
}
