#include <iostream>

void tower(int size, char a = 'A', char b = 'B', char c = 'C');

int main() {
    int size;
    std::cin >> size;
    tower(size);
    return 0;
}

void tower(int size, char a, char b, char c) {
    if (size == 1) {
        std::cout << a << "->" << c << "\n";
    } else {
        tower(size - 1, a, c, b);
        std::cout << a << "->" << c << "\n";
        tower(size - 1, b, a, c);
    }
}
