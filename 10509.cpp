#include <iostream>
#include <string>
#include <utility>
#include <vector>

class student {
private:
    std::string name;
    char gender;
    int age;
public:
    student(std::string name, char gender, int age) : name(std::move(name)), gender(gender), age(age) {}

    std::string getName() {
        return name;
    }

    [[nodiscard]] char getGender() const {
        return gender;
    }

    [[nodiscard]] int getAge() const {
        return age;
    }
};

int main() {
    int nStudents;
    std::cin >> nStudents;
    std::vector<student> students;
    std::string name;
    char gender;
    int age;
    for (int i = 0; i < nStudents; ++i) {
        std::cin >> name >> gender >> age;
        (void) students.emplace_back(name, gender, age);
    }
    for (student i: students) {
        std::cout << i.getName() << " " << i.getGender() << " " << i.getAge() << "\n";
    }
    return 0;
}
