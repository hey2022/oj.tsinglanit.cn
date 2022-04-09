#include <iostream>
#include <cmath>

int main() {
    int n1, n2, n3, n4, x;
    for (int i = 1000; i < 10000; i++) {
        x = i;
        n4 = x % 10;
        x /= 10;
        n3 = x % 10;
        x /= 10;
        n2 = x % 10;
        x /= 10;
        n1 = x % 10;
        if (n1 == n2 && n3 == n4 && sqrt(i)==int(sqrt(i))) {
            std::cout << n1 << n2 << n3 << n4 << " ";
        }
    }
    return 0;
}
