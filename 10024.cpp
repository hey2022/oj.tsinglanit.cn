#include <iostream>
#include <cmath>

int main() {
    const float PI = 3.14159;
    int depth, radius;
    std::cin >> depth >> radius;
    std::cout << ceil(20000/(depth*PI*pow(radius, 2))) << std::endl;
    return 0;
}