#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "FirstDerivative.hpp"
#include "Point.hpp"

class Circle {
private:
    double r;
public:
    Circle(double r);

    Circle(const Circle& other);

    Circle& operator=(const Circle& other);
    
    virtual Point getPoint(double t);
    virtual FirstDerivative getFirstDerivative(double t);
};

#endif