#include "./../include/Circle.hpp"
#include <math.h>

Circle::Circle(double r): r(r) {};

Circle::Circle(const Circle& other): r(other.getR()) {};

Circle::Circle(Circle&& other): r(other.r) {
    other.r = 0.0;
}

Circle& Circle::operator=(const Circle& other) {
    if (this != &other) {
        this->r = other.r;
    }
    return *this;
}

Circle& Circle::operator=(Circle&& other) {
    if (this != &other) {
        r = other.r;
        other.r = 0.0;
    }
    return *this;
}

Point Circle::getPoint(double t) const {
    return (Point(r * cos(t), r * sin(t), 0));
}

FirstDerivative Circle::getFirstDerivative(double t) const {
    return (FirstDerivative(-r * sin(t), r * cos(t), 0));
}

double Circle::getR() const {
    return r;
}

