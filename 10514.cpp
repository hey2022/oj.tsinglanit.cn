#include <iostream>
#include <string>
#include <array>

struct students {
    std::string name;
    int chinese, math, english;
};

int main() {
    std::array<students, 3> student_info = {{{"Yoga", 100, 99, 100}, {"BeiBei", 98, 98, 97}, {"Tian", 99, 100, 98}}};
    for (int i = 0; i < student_info.size(); ++i) {
        std::cout << student_info.at(i).name << " " << student_info.at(i).chinese + student_info.at(i).math + student_info.at(i).english << "\n";
    }
    return 0;
}
