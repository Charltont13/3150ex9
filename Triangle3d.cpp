#include "Triangle3d.h"
#include <cmath>

// Constructor
Triangle3d::Triangle3d(const Point3d& point1, const Point3d& point2, const Point3d& point3)
    : p1(point1), p2(point2), p3(point3) {}

// Calculate the distance between two Point3d objects
static double distance(const Point3d& s, const Point3d& t) {
    return sqrt(pow(s.get_x() - t.get_x(), 2) +
                pow(s.get_y() - t.get_y(), 2) +
                pow(s.get_z() - t.get_z(), 2));
}

// Calculate the area of the triangle
double Triangle3d::getArea() const {
    double d12 = distance(p1, p2);
    double d13 = distance(p1, p3);
    double d23 = distance(p2, p3);
    double s = (d12 + d13 + d23) / 2;
    return sqrt(s * (s - d12) * (s - d13) * (s - d23));
}
