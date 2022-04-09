#include <iostream>

int main() {
    int number, sum = 0;
    std::cin >> number;
    int array[number];
    for (int i = 0; i < number; ++i) {
        std::cin >> array[i];
        sum += array[i];
    }
    float average = float(sum) / float(number);
    for (int i = 0; i < number; ++i) {
        if (float(array[i]) > average) {
            std::cout << array[i] << " " << i << std::endl;
        }
    }
    return 0;
}
