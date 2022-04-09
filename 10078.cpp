#include <iostream>

int main() {
    int length, target, count = 0;
    std::cin >> length;
    int array[length];
    for (int i = 0; i < length; ++i) {
        std::cin >> array[i];
    }
    std::cin >> target;
    for (int i = 0; i < length; ++i) {
        if (array[i] == target) {
            ++count;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
