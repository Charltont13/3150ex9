#include "Point3d.h"
#include <cmath>

// Default constructor
Point3d::Point3d() : x(0), y(0), z(0) {}

// Copy constructor
Point3d::Point3d(const Point3d &p3d) : x(p3d.x), y(p3d.y), z(p3d.z) {}

// Parameterized constructor
Point3d::Point3d(double xVal, double yVal, double zVal) : x(xVal), y(yVal), z(zVal) {}

// Destructor
Point3d::~Point3d() {}

// Overload ostream operator
std::ostream& operator<<(std::ostream& os, const Point3d& point) {
    os << "Point(" << point.x << ", " << point.y << ", " << point.z << ")";
    return os;
}
