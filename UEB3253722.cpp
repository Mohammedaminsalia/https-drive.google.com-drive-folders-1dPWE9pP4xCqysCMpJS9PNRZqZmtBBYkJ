#include <iostream>
#include <string>

class User {
public:
    std::string name;
    std::string id;
    std::string email;

    void registerUser() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter ID: ";
        std::cin >> id;
        std::cout << "Enter email: ";
        std::cin >> email;
        std::cout << "User registered successfully!" << std::endl;
    }
};

int main() {
    User user;
    user.registerUser();

    return 0;
}
