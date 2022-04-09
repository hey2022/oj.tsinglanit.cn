#include <iostream>

bool light_turner(bool state) {
    if (state) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int number_of_lights, number_of_people;
    std::cin >> number_of_lights >> number_of_people;
    bool lights[number_of_lights];
    for (int i = 0; i < number_of_lights; ++i) {
        lights[i] = true;
    }
    for (int i = 1; i <= number_of_people; ++i) {
        for (int j = 0; j < number_of_lights; ++j) {
            if ((j + 1) % i == 0) {
                lights[j] = light_turner(lights[j]);
            }
        }
    }

    int j=0;
    for (int i = 0; i < number_of_lights; ++i) {
        if (lights[i]) continue;
        if (j > 0) {
            std::cout << ",";
        }
        std::cout << i + 1;
        ++j;
    }
    return 0;
}
