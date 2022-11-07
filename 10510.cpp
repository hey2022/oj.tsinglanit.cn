#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>

class student {
private:
    std::string name;
    int score;
public:
    student(int score, std::string name) : score(score), name(std::move(name)) {}

    std::string getName() {
        return name;
    }

    [[nodiscard]] int getScore() const {
        return score;
    }
};

bool comparator(const student &a, const student &b);

int main() {
    int nStudents;
    std::cin >> nStudents;
    std::vector<student> students;
    int score;
    std::string name;
    for (int i = 0; i < nStudents; ++i) {
        std::cin >> score >> name;
        (void) students.emplace_back(score, name);
    }
    auto it = std::min_element(students.begin(), students.end(), comparator);
    std::cout << it->getName();
    return 0;
}

bool comparator(const student &a, const student &b) {
    return a.getScore() < b.getScore();
}
