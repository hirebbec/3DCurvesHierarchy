#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Curve.hpp"

class Circle: public Curve {
private:
    double r;
public:
    Circle(double r);

    Circle(const Circle& other);

    Circle& operator=(const Circle& other);

    double getR() const ;

    Point getPoint(double t) const override;

    FirstDerivative getFirstDerivative(double t) const override;

    ~Circle() override {};
};

#endif