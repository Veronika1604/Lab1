#include <iostream>
#include <cmath>

int main() {
    // Input the value of angle alpha
    double alpha;
    std::cout << "Enter the value of angle alpha in radians: ";
    std::cin >> alpha;

    // Formula 1
    double z1 = pow(cos(3.0 / 8.0 * M_PI - alpha / 4.0), 2) - pow(cos(11.0 / 8.0 * M_PI + alpha / 4.0), 2);

    // Formula 2
    double z2 = sqrt(2.0) / 2.0 * sin(alpha / 2.0);

    // Output the results
    std::cout << "Using the first formula (z1): " << z1 << std::endl;
    std::cout << "Using the second formula (z2): " << z2 << std::endl;

    return 0;
}