#include <iostream>
#include <iomanip>

int main() {
    int length, age;
    float age_group[4] = {0};
    std::cin >> length;
    for (int i = 0; i < length; ++i) {
        std::cin >> age;
        if (age >= 0 && age <= 18) {
            ++age_group[0];
        } else if (age >= 19 && age <= 35) {
            ++age_group[1];
        } else if (age >= 36 && age <= 60) {
            ++age_group[2];
        } else if (age >= 61) {
            ++age_group[3];
        }
    }
    for (int i = 0; i < 4; ++i) {
        std::cout << std::fixed << std::setprecision(2) << age_group[i] / length * 100 << "%" << std::endl;
    }
    return 0;
}
