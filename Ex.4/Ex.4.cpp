#include <iostream>
#include <cmath>

struct Point {
    double x, y;
};

double calculateFunction(double x, double a, double b) {
    double p = sqrt(pow(x, 2) + pow(a, 2));
    double result = pow(atan(p), 3);
    result *= (x / sqrt(a) + sqrt(b));
    return result;
}

int main() {
    // Given parameter values
    const double a = 7;
    const double b = 2.3;

    // Input the value of x from the keyboard
    double x;
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    // Calculate the function value
    double y = calculateFunction(x, a, b);

    // Output the result
    std::cout << "Function value y for x = " << x << ": " << y << std::endl;

    return 0;
}