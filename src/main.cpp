#include "./../include/Circle.hpp"

int main() {
    Circle circle(3.0);

    double t = 3.1415 / 4.0;

    std::cout << circle.getPoint(t) << std::endl;

    std::cout << circle.getFirstDerivative(t) << std::endl;
}