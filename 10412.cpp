#include <iostream>

int main() {
    int length;
    std::cin >> length;
    int array[length];
    for (int i = 0; i < length; ++i) {
        std::cin >> array[i];
    }
    int start = 0;
    int end = 0;
    int largest_combo[3] = {start, end, end - start+ 1};
    for (int i = 1; i < length; ++i) {
        if (array[i] > array[i - 1]) {
            end = i;
        }
        else if (end - start + 1 > largest_combo[2]) {
            largest_combo[0] = start;
            largest_combo[1] = end;
            largest_combo[2] = end - start + 1;
            start = i;
        } else {
            start = i;
        }
    }
    for (int i = largest_combo[0]; i <= largest_combo[1]; ++i) {
        std::cout << array[i] << " ";
    }
    return 0;
}
