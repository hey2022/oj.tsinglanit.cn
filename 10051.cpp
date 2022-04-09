#include <iostream>
#include <cmath>

const int length = 3;
int array[length];

void array_sort() {
    for (int j = 0; j < length - 1; j++) {
        for (int i = 0; i < (length - 1 - j); i++) {
            if (array[i] > array[i + 1]) {
                std::swap(array[i], array[i + 1]);
            }
        }
    }
}

void triangle_find() {
    if (array[0] + array[1] < array[2]) {
        std::cout << "Not triangle" << std::endl;
    }
    if (pow(array[0], 2) + pow(array[1], 2) == pow(array[2], 2)) {
        std::cout << "Right triangle" << std::endl;
    }
    if (pow(array[0], 2) + pow(array[1], 2) > pow(array[2], 2)) {
        std::cout << "Acute triangle" << std::endl;
    }
    if (pow(array[0], 2) + pow(array[1], 2) < pow(array[2], 2)) {
        std::cout << "Obtuse triangle" << std::endl;
    }
    if (array[0] == array[1]) {
        std::cout << "Isosceles triangle" << std::endl;
    }
    if (array[0] == array[1] && array[0] == array[2]) {
        std::cout << "Equilateral triangle" << std::endl;
    }
}
int main() {
    for (int & x : array) {
        std::cin >> x;
    }
    array_sort();
    triangle_find();
    return 0;
}
