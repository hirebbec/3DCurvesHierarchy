#include "./../include/Point.hpp"

Point::Point(double x, double y, double z): x(x), y(y), z(z) {};

Point::Point(const Point& other): x(other.x), y(other.y), z(other.z) {};

Point::Point(Point&& other): x(other.x), y(other.y), z(other.z) {
    other.x = 0.0;
    other.y = 0.0;
    other.z = 0.0;
};

Point& Point::operator=(const Point& other) {
    if (this != &other) {
        this->x = other.x;
        this->y = other.y;
        this->z = other.z;
    }
    return *this;
}

Point& Point::operator=(Point&& other) {
    if (this != &other) {
        this->x = other.x;
        this->y = other.y;
        this->z = other.z;
        other.x = 0.0;
        other.y = 0.0;
        other.z = 0.0;
    }
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
