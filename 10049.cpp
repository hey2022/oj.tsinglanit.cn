#include <iostream>

int main(){
	int y, m;
	std::cin >> y >> m;
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		std::cout << 31 << std::endl;
	} else if (m == 4 || m == 6 || m == 9 || m == 11) {
		std::cout << 30 << std::endl;
	} else if (m == 2 && y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {
		std::cout << 29 << std::endl;
	} else if (m == 2) {
        std::cout << 28 << std::endl;
    }
	return 0;
}