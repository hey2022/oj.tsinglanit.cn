#include <iostream>

int main() {
    int number_of_children;
    std::cin >> number_of_children;
    std::cout << number_of_children * (number_of_children + 1) / 2 << std::endl;
    return 0;
}
