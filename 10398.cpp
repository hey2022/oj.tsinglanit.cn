#include <iostream>

int main() {
    int number;
    std::cin >> number;
    bool array[number];
    for (int i = 0; i < number; ++i) {
        array[i] = true;
    }
    for (int i = 1; i <= number; ++i) {
        int index = i - 1;
        if (i % 2 == 0) {
            array[index] = false;
        }
        if (i % 5 == 0) {
            array[index] = false;
        }
    }
    for (int i = 1; i <= number; ++i) {
        if (array[i - 1]) {
            std::cout << i << " ";
        }
    }
    return 0;
}
