#include <iostream>
#include <string>
#include <array>
#include <utility>

class student {
private:
    std::string name;
    int chinese;
    int age;
    int english;
public:
    student(std::string name, int chinese, int math, int english) : name(std::move(name)), chinese(chinese), age(math), english(english) {}
    std::string getName() {
        return name;
    }
    [[nodiscard]] int getTotal() const {
        return chinese + age + english;
    }
};

int main() {
    std::array<student, 3> students{student("Yoga", 100, 99, 100), student("Beibei", 98, 98, 97), student("Tian", 99, 100, 98)};
    for (student i: students) {
        std::cout << i.getName() << " " << i.getTotal() << "\n";
    }
    return 0;
}
