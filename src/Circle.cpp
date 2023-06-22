#include "./../include/Circle.hpp"
#include <math.h>

Circle::Circle(double r): r(r) {};

Point Circle::getPoint(double t) {
    return (Point(r * cos(t), r * sin(t), 0));
}

FirstDerivative Circle::getFirstDerivative(double t) {
    return (FirstDerivative(-r * sin(t), r * cos(t), 0));
}