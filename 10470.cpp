#include <iostream>
#include <string>

int main() {
    std::string str1, str2, str3, str4, str5;
    int sum2 = 0, sum3 = 0, count4 = 0, mid_5;
    std::cin >> str1 >> str2 >> str3 >> str4 >> str5;
    for (char i2 : str2) {
        sum2 += i2 - 48;
    }
    for (int i3 = 0; i3 < str3.length(); i3 += 2) {
        sum3 += str3[i3] - 48;
    }
    for (char i4 : str4) {
        if (i4 == '4') {
            ++count4;
        }
    }
    if (str5.length() % 2 == 1) {
        mid_5 = str5[str5.length() / 2] - 48;
    } else {
        mid_5 = str5[str5.length() / 2 - 1] - 48;
    }
    std::cout << str1.length() << std::endl;
    std::cout << sum2 << std::endl;
    std::cout << sum3 << std::endl;
    std::cout << count4 << std::endl;
    std::cout << mid_5 << std::endl;
    return 0;
}
