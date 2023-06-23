#include "./../include/Circle.hpp"
#include "./../include/Elipce.hpp"
#include "./../include/Helix.hpp"
#include <random>
#include <vector>
#include <memory>
#include <algorithm>

bool compareCirclesByRadius(const std::shared_ptr<Circle>& circle1, const std::shared_ptr<Circle>& circle2) {
    return circle1->getR() < circle2->getR();
}

int main() {
    //Task 2
    /*   Populate a container (e.g. vector or list) of objects of these types 
    created in random manner with random parameters. */
    std::vector<std::shared_ptr<Curve>> curves;
    // Инициализация генератора случайных чисел
    std::random_device rd;
    std::mt19937 gen(rd());
    // Создание распределения
    std::uniform_real_distribution<double> dis(0.0, 10.0);
    for (int i = 0; i < 5; ++i) {
        curves.push_back(std::make_shared<Circle>(dis(gen)));
        curves.push_back(std::make_shared<Elipce>(dis(gen), dis(gen)));
        curves.push_back(std::make_shared<Helix>(dis(gen), dis(gen)));
    }
    //Task 3
    /*Print coordinates of points and derivatives of all curves in the container at t=PI/4.*/
    double t = 3.1415 / 4.0;
    for (const auto& curve : curves) {
        std::cout << curve->getPoint(t) << std::endl;
        std::cout << curve->getFirstDerivative(t) << std::endl;
    }
    //Task 4
    /*Populate a second container that would contain only circles from the first container. Make sure the
    second container shares (i.e. not clones) circles of the first one, e.g. via pointers.*/
    std::vector<std::shared_ptr<Circle>> circles;
    for (const auto& curve : curves) {
        // Проверяем, является ли текущий элемент вектора curves объектом типа Circle
        if (auto circle = std::dynamic_pointer_cast<Circle>(curve)) {
            // Если да, добавляем его во второй контейнер circles
            circles.push_back(circle);
        }
    }
    //Task 5
    /*Sort the second container in the ascending order of circles’ radii. That is, the first element has the
    smallest radius, the last - the greatest.*/
    std::sort(circles.begin(), circles.end(), compareCirclesByRadius);
    // Task 6
    /*Compute the total sum of radii of all curves in the second container.*/
    double sum = 0.0;
    for (auto it = circles.begin(); it != circles.end(); ++it) {
        sum += (*it).get()->getR();
    }
}