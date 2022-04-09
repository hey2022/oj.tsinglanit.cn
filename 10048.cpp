#include <iostream>
#include <cmath>

int main() {
    float mass, height;
    std::cin >> mass >> height;
    float bmi = mass / pow(height, 2);
    if (bmi < 18.5) {
        std::cout << "Underweight" << std::endl;
    } else if (bmi >= 18.5 && bmi < 24) {
        std::cout << "Normal" << std::endl;
    } else if (bmi >= 24) {
        std::cout << bmi << std::endl;
        std::cout << "Overweight" << std::endl;
    }
    return 0;
}