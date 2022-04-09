#include <iostream>

int main() {
    int length, max, sum = 0;
    std::cin >> length;
    int array[length];
    for (int i = 0; i < length; ++i) {
        std::cin >> array[i];
        sum += array[i];
    }
    max = array[0];
    for (int i = 1; i < length; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    std::cout << sum - max << std::endl;
    return 0;
}
