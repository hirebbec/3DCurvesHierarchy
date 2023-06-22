#include "./../include/Point.hpp"

Point::Point(double x, double y, double z): x(x), y(y), z(z) {};

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::getZ() const {
    return z;
}

std::ostream& operator<<(std::ostream& os, const Point& point) {
    return os << "(" << point.getX() << ", " << point.getY() << ", " << point.getZ() << ")";
}
