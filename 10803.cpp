#include <iostream>

int fibHelper(int num);

int fib(int num, int a, int b);

int main() {
    int num;
    std::cin >> num;
    std::cout << fibHelper(num);
    return 0;
}

int fibHelper(int num) {
    return fib(num, 0, 1);
}


int fib(int num, int a, int b) {
    if (num == 0) { return a; }
    if (num == 1) { return b; }
    return fib(num - 1, b, a + b);
}
