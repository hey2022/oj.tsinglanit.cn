#include <iostream>
#include <string>
#include <utility>

class person {
private:
    int dob;
    std::string id;
    std::string address;
public:
    person(int dob, std::string id, std::string address) : dob(dob), id(std::move(id)), address(std::move(address)) {}
    [[nodiscard]] int getDob() const {
        return dob;
    }
    std::string getId() {
        return id;
    }
    std::string getAddress() {
        return address;
    }
};

int main() {
    person steven(199306, "135465199306055462", "广东省东莞市松山湖");
    std::string query;
    std::cin >> query;
    if (query == "date_of_birth") {
        std::cout << steven.getDob();
    }
    if (query == "ID_card_number") {
        std::cout << steven.getId();
    }
    if (query == "address") {
        std::cout << steven.getAddress();
    }
    return 0;
}
