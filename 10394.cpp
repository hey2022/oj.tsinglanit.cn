#include <iostream>

int main() {
    int num, max, min;
    std::cin >> num;
    int array_of_numbers[num];
    for (int i = 0; i < num; i++) {
        std::cin >> array_of_numbers[i];
    }
    max = array_of_numbers[0];
    min = array_of_numbers[0];
    for (int i = 1; i < num; i++) {
        if (max < array_of_numbers[i]) {
            max = array_of_numbers[i];
        }
        if (min > array_of_numbers[i]) {
            min = array_of_numbers[i];
        }
    }
    std::cout << max << " " << min << std::endl;
    return 0;
}
