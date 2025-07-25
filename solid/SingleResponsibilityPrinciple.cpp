#include <iostream>
#include <string>

//  Good: One class for user data
class User {
public:
    std::string name;
    std::string email;

    User(std::string name, std::string email) : name(name), email(email) {}
};

//  Good: Another class for handling user saving logic
class UserRepository {
public:
    void saveToDB(const User& user) {
        std::cout << "Saving " << user.name << " to database.\n";
    }
};

int main() {
    User user("Alice", "alice@example.com");
    UserRepository repo;
    repo.saveToDB(user);
    return 0;
}
