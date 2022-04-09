#include <iostream>
#include <cmath>

int main() {
    int houses, x, y, people;
    double distance, time = 0;
    std::cin >> houses;
    for (int i = 0; i < houses; i++) {
        std::cin >> x >> y >> people;
        distance = sqrt(pow(x, 2) + pow(y, 2));
        time += distance/50 * 2 + 1.5 * people;
    }
    std::cout << ceil(time) << std::endl;
    return 0;
}
