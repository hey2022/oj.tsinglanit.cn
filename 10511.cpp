#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>

class student {
private:
    std::string name;
    float chinese;
    float math;
    float english;
public:
    student(std::string name, float chinese, float math, float english) : name(std::move(name)), chinese(chinese),
                                                                          math(math), english(english) {}

    std::string getName() {
        return name;
    }

    [[nodiscard]] float getChinese() const {
        return chinese;
    }

    [[nodiscard]] float getMath() const {
        return math;
    }

    [[nodiscard]] float getEnglish() const {
        return english;
    }
};

bool chineseComp(const student &a, const student &b);

bool mathComp(const student &a, const student &b);

bool englishComp(const student &a, const student &b);

int main() {
    int nStudents;
    std::cin >> nStudents;
    std::vector<student> students;
    std::string name;
    float chinese;
    float math;
    float english;
    for (int i = 0; i < nStudents; ++i) {
        std::cin >> name >> chinese >> math >> english;
        (void) students.emplace_back(name, chinese, math, english);
    }
    auto maxChinese = std::max_element(students.begin(), students.end(), chineseComp);
    auto maxMath = std::max_element(students.begin(), students.end(), mathComp);
    auto maxEnglish = std::max_element(students.begin(), students.end(), englishComp);
    std::cout << maxChinese->getName() << " " << maxMath->getName() << " " << maxEnglish->getName();
    return 0;
}

bool chineseComp(const student &a, const student &b) {
    return a.getChinese() < b.getChinese();
}

bool mathComp(const student &a, const student &b) {
    return a.getMath() < b.getMath();
}

bool englishComp(const student &a, const student &b) {
    return a.getEnglish() < b.getEnglish();
}
