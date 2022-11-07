#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>

class student {
private:
    std::string name;
    int chinese;
    int math;
    int total;
public:
    student(std::string name, int chinese, int math) : name(std::move(name)), chinese(chinese), math(math),
                                                       total(chinese + math) {}

    std::string getName() {
        return name;
    }

    [[nodiscard]] int getChinese() const {
        return chinese;
    }

    [[nodiscard]] int getMath() const {
        return math;
    }

    [[nodiscard]] int getTotal() const {
        return total;
    }
};

bool totalComp(const student &a, const student &b);

int main() {
    int nStudents;
    std::cin >> nStudents;
    std::vector<student> students;
    std::string name;
    int chinese;
    int math;
    for (int i = 0; i < nStudents; ++i) {
        std::cin >> name >> chinese >> math;
        (void) students.emplace_back(name, chinese, math);
    }
    std::sort(students.begin(), students.end(), totalComp);
    for (student i: students) {
        std::cout << i.getName() << " " << i.getChinese() << " " << i.getMath() << " " << i.getTotal() << "\n";
    }
    return 0;
}

bool totalComp(const student &a, const student &b) {
    return a.getTotal() > b.getTotal();
}
