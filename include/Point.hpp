#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

class Point {
private:
    double x;
    double y;
    double z;
public:
    Point(double x, double y, double z);

    double getX() const;
    double getY() const;
    double getZ() const;
};

std::ostream& operator<<(std::ostream& os, const Point& point);


#endif