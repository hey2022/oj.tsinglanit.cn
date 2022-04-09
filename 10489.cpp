#include <iostream>
#include <string>

int main() {
    std::string movie_name;
    std::getline(std::cin, movie_name);
    std::cout << "《" << movie_name << "》也是我喜欢的";
    return 0;
}
