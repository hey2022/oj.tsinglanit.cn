#include <iostream>

int main() {
    double array[10];
    for (double & i : array) {
        std::cin >> i;
    }
    for (int i = 9; i >= 0; --i) {
        std::cout << array[i] << " ";
    }
    return 0;
}
