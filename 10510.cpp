#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct student {
    int score;
    std::string name;
};

int main() {
    int n_students;
    std::cin >> n_students;
    std::vector<student> student_info;
    for (int i = 0; i < n_students; ++i) {
        student temp_student;
        std::cin >> temp_student.score >> temp_student.name;
        student_info.push_back(temp_student);
    }

    for (auto & i : student_info) {
        std::cout << i.score << " " << i.name << "\n";
    }
    return 0;
}
