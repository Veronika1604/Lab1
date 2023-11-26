#include <iostream>
#include <cmath>

int main() {
    // Input values for x and y
    double x, y;
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    std::cout << "Enter the value of y: ";
    std::cin >> y;

    // Calculate the value of the expression
    double expressionResult = exp(y) * (8 * pow(x, 2) + 3) / (1 - 9 * pow(y, 2)) * (x + 0.5) / (9 * y + 3);

    // Output the result
    std::cout << "Result of the expression: " << expressionResult << std::endl;

    return 0;
}