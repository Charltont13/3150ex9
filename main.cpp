#include "Point3d.h"
#include "Triangle3d.h"
#include <iostream>

int main() {
    // Create 3 points
    Point3d p1(0, 0, 0);
    Point3d p2(1, 0, 0);
    Point3d p3(0, 1, 0);

    // Create triangle with these points
    Triangle3d triangle(p1, p2, p3);

    // Output the area of the triangle
    std::cout << "The area of the triangle is: " << triangle.getArea() << std::endl;

    return 0;
}
