#include <iostream>

int main() {
    int number, sum = 0, temp;
    bool contain_seven = false;
    std::cin >> number;
    for (int i = 1; i <= number; ++i) {
        temp = i;
        while (temp != 0) {
            if(temp % 10 == 7) {
                contain_seven = true;
                break;
            }
            temp /= 10;
        }
        if (i % 7 != 0 && !contain_seven) {
            sum += i * i;
        }
        contain_seven = false;
    }
    std::cout << sum << std::endl;
    return 0;
}
