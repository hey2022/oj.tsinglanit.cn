#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>

class student {
private:
    std::string name;
    int finals;
    int classEval;
    char stuCo;
    char western;
    int papers;
    int bonus{};
public:
    student(std::string name, int finals, int classEval, char stuCo, char western, int papers) : name(std::move(name)),
                                                                                                 finals(finals),
                                                                                                 classEval(classEval),
                                                                                                 stuCo(stuCo),
                                                                                                 western(western),
                                                                                                 papers(papers) {
        calcBonus();
    }

    std::string getName() {
        return name;
    }

    void calcBonus() {
        bonus = 0;
        if (finals > 80 && papers > 0) {
            bonus += 8000;
        }
        if (finals > 85 && classEval > 80) {
            bonus += 4000;
        }
        if (finals > 90) {
            bonus += 2000;
        }
        if (western == 'Y' && finals > 85) {
            bonus += 1000;
        }
        if (stuCo == 'Y' && classEval > 80) {
            bonus += 850;
        }
    }

    [[nodiscard]] int getBonus() const {
        return bonus;
    }
};

bool bonusComp(const student &a, const student &b);

int main() {
    int nStudents;
    std::cin >> nStudents;
    std::vector<student> students;
    std::string name;
    int finals;
    int classEval;
    char stuCo;
    char western;
    int papers;
    for (int i = 0; i < nStudents; ++i) {
        std::cin >> name >> finals >> classEval >> stuCo >> western >> papers;
        (void) students.emplace_back(name, finals, classEval, stuCo, western, papers);
    }
    auto max = std::max_element(students.begin(), students.end(), bonusComp);
    int total = 0;
    for (const student &i: students) {
        total += i.getBonus();
    }
    std::cout << max->getName() << "\n" << max->getBonus() << "\n" << total;
    return 0;
}

bool bonusComp(const student &a, const student &b) {
    return a.getBonus() < b.getBonus();
}
