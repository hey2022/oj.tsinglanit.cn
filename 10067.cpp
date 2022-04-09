#include <iostream>

int main() {
    int number_of_numbers, number, condition_met = 0, one, sum;
    std::cin >> number_of_numbers;
    for (int i = 0; i < number_of_numbers; i++) {
        std::cin >> number;
        sum = 0;
        one = number % 10;
        for (int j = 0; j < 3; j++) {
            number /= 10;
            sum += number % 10;
        }
        if (one - sum > 0) {
            condition_met++;
        }
    }
    std::cout << condition_met << std::endl;
    return 0;
}
