#include "./../include/Point.hpp"

Point::Point(double x, double y, double z): x(x), y(y), z(z) {};

Point::Point(const Point& other): x(other.getX()), y(other.getY()), z(other.getZ()) {};

Point& Point::operator=(const Point& other) {
    this->x = other.getX();
    this->y = other.getY();
    this->z = other.getZ();
    return *this;
}

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
