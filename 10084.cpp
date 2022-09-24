#include <iostream>
#include <vector>

bool lightTurner(bool state) {
    if (state) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int numberOfLights;
    int numberOfPeople;
    std::cin >> numberOfLights >> numberOfPeople;
    std::vector<bool> lights(numberOfLights, true);
    for (int i = 1; i <= numberOfPeople; ++i) {
        for (int j = 0; j < numberOfLights; ++j) {
            if ((j + 1) % i == 0) {
                lights.at(j) = lightTurner(lights.at(j));
            }
        }
    }
    int j = 0;
    for (int i = 0; i < numberOfLights; ++i) {
        if (!lights.at(i)) {
            if (j > 0) {
                std::cout << ",";
            }
            std::cout << i + 1;
            ++j;
        }
    }
    return 0;
}
