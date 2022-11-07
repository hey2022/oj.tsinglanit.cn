#include <iostream>
#include <algorithm>
#include <vector>

class choise {
private:
    int count = 0;

    bool isPrime(int number) {
        if (number == 0 || number == 1) {
            return false;
        } else {
            for (int i = 2; i <= number / 2; ++i) {
                if (number % i == 0) { return false; }
            }
        }
        return true;
    }

    int chooseCalc(std::vector<int> numbers, int chooseN, int sum, int depth) {

    }

public:
    int choose(const std::vector<int> &numbers, int chooseN) {

    }

    int getCount() { return count; }
};

int main() {
    int size;
    int chooseN;
    std::cin >> size >> chooseN;
    std::vector<int> numbers(size);
    for (int &i: numbers) {
        std::cin >> i;
    }
    std::cout << chooseHelper(numbers, chooseN);
    return 0;
}
