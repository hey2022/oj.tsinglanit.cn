#include <iostream>

int sum(int num);

int main() {
    int num;
    std::cin >> num;
    std::cout << sum(num);
    return 0;
}

int sum(int num) {
    if (num == 1) {
        return 1;
    }
    return num + sum(num - 1);
}
