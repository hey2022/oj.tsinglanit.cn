#include <iostream>

int main() {
    int length;
    std::cin >> length;
    int array[length];
    for (int & x : array) {
        std::cin >> x;
    }
    for (int j = 0; j < length - 1; j++) {
        for (int i = 0; i < (length - 1 - j); i++) {
            if (array[i] > array[i + 1]) {
                std::swap(array[i], array[i + 1]);
            }
        }
    }
    std::cout << array[1] << std::endl;
    return 0;
}
