#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "FirstDerivative.hpp"
#include "Point.hpp"

class Circle {
private:
    double r;
public:
    Circle(double r);
    Point getPoint(double t);
    FirstDerivative getFirstDerivative(double t);
};

#endif