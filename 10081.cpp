#include <iostream>

int main() {
    int length;
    std::cin >> length;
    int array[length];
    for (int i = 0; i < length; ++i) {
        std::cin >> array[i];
    }
    for (int i = length - 1; i >= 0; --i) {
        std::cout << array[i] << " ";
    }
    return 0;
}
