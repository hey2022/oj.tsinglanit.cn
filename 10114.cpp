#include <iostream>
#include <algorithm>

int hcf(int num, int num2);

int lcm(int num, int num2, int tempLcm);

int lcmHelper(int num, int num2);

int main() {
    int num;
    int num2;
    std::cin >> num >> num2;
    std::cout << hcf(num, num2) << " " << lcmHelper(num, num2);
    return 0;
}

int hcf(int num1, int num2) {
    int remainder = num1 % num2;
    return remainder == 0 ? num2 : hcf(num2, remainder);
}

int lcm(int num1, int num2, int tempLcm) {
    return tempLcm % num1 == 0 && tempLcm % num2 == 0 ? tempLcm : lcm(num1, num2, ++tempLcm);
}

int lcmHelper(int num, int num2) {
    num = abs(num);
    num2 = abs(num2);
    int tempLcm = std::max(num, num2);
    return lcm(num, num2, tempLcm);
}
