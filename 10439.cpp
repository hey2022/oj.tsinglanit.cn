#include <iostream>
#include <string>

std::string password_check(const std::string& username, const std::string& password) {
    if (username == "Tsinglan IT" && password == "Tsinglan12345") {
        return "验证通过，欢迎！";
    } else if (username != "Tsinglan IT" && password != "Tsinglan12345") {
        return "用户名与密码错误！";
    } else if (username != "Tsinglan IT") {
        return "用户名错误！";
    } else if (password != "Tsinglan12345") {
        return "密码错误！";
    } else {
        return "error";
    }
}

int main() {
    std::string username, password;
    std::getline(std::cin, username);
    std::getline(std::cin, password);
    std::cout << password_check(username, password);
    return 0;
}
