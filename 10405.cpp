#include <iostream>

int main() {
    int length;
    std::cin >> length;
    double array[length];
    for (double & i : array) {
        std::cin >> i;
    }
    for (int i = length - 1; i >= 0; --i) {
        std::cout << array[i] << " ";
    }
    return 0;
}
