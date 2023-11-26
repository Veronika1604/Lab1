#include <iostream>
#include <cmath>

struct Point {
    double x, y;
};

// Function to calculate the distance between two points
double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// Function to calculate the median of a triangle
Point calculateMedian(Point A, Point B, Point C) {
    Point Ma;
    Ma.x = (B.x + C.x) / 2.0;
    Ma.y = (B.y + C.y) / 2.0;
    return Ma;
}

// Function to calculate the bisector of a triangle
Point calculateBisector(Point A, Point B, Point C) {
    Point Wb;
    Wb.x = (A.x * distance(B, C) + B.x * distance(A, C) + C.x * distance(A, B)) / (distance(B, C) + distance(A, C) + distance(A, B));
    Wb.y = (A.y * distance(B, C) + B.y * distance(A, C) + C.y * distance(A, B)) / (distance(B, C) + distance(A, C) + distance(A, B));
    return Wb;
}

int main() {
    // Variant number or a specific constant value
    const double i = 2;  // Replace 2 with your variant number or a specific value

    // Coordinates of the triangle vertices
    Point A = { 0, 0 };
    Point B = { i, i - 1 };
    Point C = { -i, i + 1 };

    // Calculating the median and bisector
    Point Ma = calculateMedian(A, B, C);
    Point Wb = calculateBisector(A, B, C);

    // Displaying the results
    std::cout << "Coordinates of the median Ma: (" << Ma.x << ", " << Ma.y << ")" << std::endl;
    std::cout << "Coordinates of the bisector Wb: (" << Wb.x << ", " << Wb.y << ")" << std::endl;

    return 0;
}