#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "FirstDerivative.hpp"
#include "Point.hpp"

class Circle {
private:
    double r;
public:
    Circle(double r);
    virtual Point getPoint(double t);
    virtual FirstDerivative getFirstDerivative(double t);
};

#endif