#include <iostream>
#include <string>
#include <vector>

struct students {
    std::string name;
    char gender{};
    int age{};
};

int main() {
    int n_students;
    std::cin >> n_students;
    std::vector<students> student_info;
    for (int i = 0; i < n_students; ++i) {
        students temp_student;
        std::cin >> temp_student.name >> temp_student.gender >> temp_student.age;
        student_info.push_back(temp_student);
    }
    for (auto & i : student_info) {
        std::cout << i.name << " " << i.gender << " " <<i.age << "\n";
    }
    return 0;
}
