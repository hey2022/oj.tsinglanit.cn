#include <iostream>
#include <string>
#include <array>

struct student {
    std::string name;
    int id{};
    int classes{};
    int chinese{};
    int english{};
    int math{};
    std::string address;
};

int main() {
    std::array<student, 10> students;
    int max = 0;
    for (student &i: students) {
        std::cin >> i.name >> i.id >> i.classes >> i.chinese >> i.english >> i.math >> i.address;
        max = std::max(max, i.math);
    }
    for (const student &i: students) {
        if (i.math == max) {
            std::cout << i.name << " ";
        }
    }
    return 0;
}
