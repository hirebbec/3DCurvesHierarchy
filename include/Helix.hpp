#ifndef HELIX_HPP
#define HELIX_HPP

#include "Curve.hpp"

class Helix: public Curve {
private:
    double r;
    double a;
public:
    Helix(double r, double a);

    Helix(const Helix& other);

    Helix(Helix&& other);

    Helix& operator=(const Helix& other);

    Helix& operator=(Helix&& other);

    double getR() const;
    double getA() const;

    Point getPoint(double t) const override;
    FirstDerivative getFirstDerivative(double t) const override;

    ~Helix() {};
};

#endif