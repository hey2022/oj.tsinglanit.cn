#include <iostream>

int main() {
    float distance;
    std::cin >> distance;
    int bike_time = (distance / 3) + 27 + 23, walk_time = distance / 1.2;
    if (bike_time < walk_time) {
        std::cout << "Bike" << std::endl;
    } else if (bike_time > walk_time) {
        std::cout << "Walk" << std::endl;
    } else if (bike_time == walk_time) {
        std::cout << "All" << std::endl;
    }
    return 0;
}
