#include <iostream>
#include <algorithm>
#include <array>
#include <string>

class palindromeGenerator {
private:
    const std::array<int, 12> days{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const std::array<int, 12> leapDays{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    bool isLeap(int year) {
        return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
    }

    bool isDate(int date) {
        if (isLeap(getYear(date))) {
            return leapDays.at(getMonth(date) - 1)
        } else {

        }
    }

    int getMonth(int date) {
        return date / 100 % 100;
    }

    int getDay(int date) {
        return date % 100;
    }

    int getYear(int date) {
        return date / 10000;
    }

    bool palindrome(const std::string& date) {
        std::string reversed = date;
        std::reverse(reversed.begin(), reversed.end());
        return date == reversed;
    }
public:
    int getNPalindrone(int start, int end) {
        int startYear = getYear(start);
        int endYear = getYear(end);
    }
};

int main() {
    int start;
    int end;
    std::cin >> start >> end;
    palindromeGenerator palindromeDates;
    std::cout << palindromeDates.getNPalindrone(start, end);
    return 0;
}