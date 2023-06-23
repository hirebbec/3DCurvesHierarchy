#ifndef CURVE_HPP
#define CURVE_HPP

#include "Point.hpp"
#include "FirstDerivative.hpp"

class Curve {
public:
    virtual Point getPoint(double t) const = 0;
    virtual FirstDerivative getFirstDerivative(double t) const = 0;

    virtual ~Curve() {};
};

#endif