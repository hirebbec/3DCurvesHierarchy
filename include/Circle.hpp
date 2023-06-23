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

    double getR() const ;

    virtual Point getPoint(double t) const;
    virtual FirstDerivative getFirstDerivative(double t) const;
};

#endif