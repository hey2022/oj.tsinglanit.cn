#include <iostream>
#include <iomanip>

int main() {
    float population, years;
    std::cin >> population >> years;
    for (int i = 0; i < years; i++) {
        population *= (1 + 0.001);
    }
    std::cout << std::fixed << std::setprecision(4) << population << std::endl;
    return 0;
}
