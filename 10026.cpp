#include <iostream>

int main() {
    int n1, n2, i;
    std::cin >> n1 >> n2 >> i;
    std::cout << n1+(n2-n1)*(i-1) << std::endl;
    return 0;
}