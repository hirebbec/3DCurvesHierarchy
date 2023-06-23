#include "./../include/Circle.hpp"
#include <math.h>

Circle::Circle(double r): r(r) {};

Point Circle::getPoint(double t) const {
    return (Point(r * cos(t), r * sin(t), 0));
}

FirstDerivative Circle::getFirstDerivative(double t) const {
    return (FirstDerivative(-r * sin(t), r * cos(t), 0));
}

double Circle::getR() const {
    return r;
}

Circle::Circle(const Circle& other): r(other.getR()) {};

