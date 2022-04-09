#include <iostream>

int main(){
    int start, end, even_sum = 0, odd_sum = 0;
    std::cin >> start >> end;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            even_sum += i;
        } else if (i % 2 == 1) {
            odd_sum += i;
        }
    }
    std::cout << even_sum << " " << odd_sum << std::endl;
    return 0;
}
