#ifndef TRIANGLE3D_H
#define TRIANGLE3D_H

#include "Point3d.h"

class Triangle3d {
private:
    Point3d p1;
    Point3d p2;
    Point3d p3;

public:
    Triangle3d(const Point3d& p1, const Point3d& p2, const Point3d& p3);
    double getArea() const;
};

#endif // TRIANGLE3D_H
