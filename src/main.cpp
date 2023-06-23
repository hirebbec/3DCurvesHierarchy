#include "./../include/Circle.hpp"
#include "./../include/Elipce.hpp"

int main() {
    Circle circle(3.0);
    Elipce elipce(5.5, 3.3);

    double t = 3.1415 / 4.0;

    std::cout << circle.getPoint(t) << std::endl;

    std::cout << circle.getFirstDerivative(t) << std::endl;

    std::cout << elipce.getPoint(t) << std::endl;

    std::cout << elipce.getFirstDerivative(t) << std::endl;
}