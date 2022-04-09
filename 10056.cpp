#include <iostream>
#include <iomanip>

int main() {
    int num_students, total_age = 0;
    std::cin >> num_students;
    int age[num_students];
    for (int i = 0; i < num_students; i++) {
        std::cin >> age[i];
    }
    for (int i = 0; i < num_students; i++) {
        total_age += age[i];
    }
    std::cout << std::fixed << std::setprecision(2) << float(total_age)/num_students << std::endl;
    return 0;
}