#ifndef POINT3D_H
#define POINT3D_H

#include <iostream>

struct Point3d {
private:
    double x;
    double y;
    double z;

public:
    Point3d();
    Point3d(const Point3d &p3d);
    Point3d(double x, double y, double z);
    ~Point3d();

    double get_x() const { return x; }
    double get_y() const { return y; }
    double get_z() const { return z; }

    void set_x(double val) { x = val; }
    void set_y(double val) { y = val; }
    void set_z(double val) { z = val; }

    friend std::ostream& operator<<(std::ostream& os, const Point3d& point);
};

#endif // POINT3D_H
