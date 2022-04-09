#include <iostream>

int main() {
    for (int number = 0; number <= 200 ; ++number) {
        if (number % 3 == 2 && number % 7 == 1) {
            std::cout << number << " ";
        }
    }
    return 0;
}
