#include <iostream>
#include <algorithm>
#include <string>

std::string digit_sum(std::string num_string, unsigned long long length);

std::string add(std::string num1, std::string num2);

int main() {
    std::string num_string;
    unsigned long long length;
    std::cin >> num_string >> length;
    std::cout << digit_sum(num_string, length) << "\n";
    return 0;
}

std::string digit_sum(std::string num_string, unsigned long long length) {
    std::string sum;
    for (unsigned long long i = 0; i <= num_string.length() - length; ++i) {
        std::string number;
        for (unsigned long long j = i; j < num_string.length() && j < i + length; ++j) {
            number.push_back(num_string.at(j));
        }
        sum = add(sum, number);
    }
    return sum;
}

std::string add(std::string num1, std::string num2) {
    if (num1.length() > num2.length()) {
        std::swap(num1, num2);
    }
    std::string ans;
    unsigned long long len1 = num1.length(), len2 = num2.length();
    std::reverse(num1.begin(), num1.end());
    std::reverse(num2.begin(), num2.end());
    int carry = 0;
    for (unsigned long long i = 0; i < len1; i++) {
        int sum = num1.at(i) + num2.at(i) + carry - 96;
        ans.append(std::to_string(sum % 10));
        carry = sum / 10;
    }
    for (unsigned long long i = len1; i < len2; i++) {
        int sum = num2.at(i) - 48 + carry;
        ans.append(std::to_string(sum % 10));
        carry = sum / 10;
    }
    if (carry) {
        ans.append(std::to_string(carry));
    }
    std::reverse(ans.begin(), ans.end());
    return ans;
}
