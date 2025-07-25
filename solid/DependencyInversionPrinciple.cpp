#include <iostream>
#include <memory>

/*
We want to save user data.

But we want to write the code in a way that:
    Works now with file storage
    Could later also work with database, cloud storage, etc.
    Without rewriting everything.

Imagine:
    IDataStorage → a promise that says: “I can save data.”
    FileStorage / DatabaseStorage → real workers who know how to save data.
    UserDataService → a manager who just says: “Hey, please save this data.”

      +--------------------+         +---------------------+
      | High-level class   | <------ |    Abstraction      |
      | UserDataService    |         |   (IDataStorage)    |
      +--------------------+         +---------------------+
                                            ^
                                            |
                         +------------------+------------------+
                         |                                     |
              +---------------------+              +----------------------+
              |     FileStorage     |              |   DatabaseStorage    |
              +---------------------+              +----------------------+

*/

class IDataStorage {
public:
    virtual void save(const std::string& data) = 0;
    virtual ~IDataStorage() = default;
};

/*
FileStorage knows how to save data into a file.
*/
class FileStorage : public IDataStorage {
public:
    void save(const std::string& data) override {
        std::cout << "Saving to file: " << data << "\n";
    }
};

/*
DatabaseStorage knows how to save data into a database.
*/
class DatabaseStorage : public IDataStorage {
public:
    void save(const std::string& data) override {
        std::cout << "Saving to database: " << data << "\n";
    }
};

/*
We told UserDataService to just “ask anyone who can save data”
instead of always using FileStorage,
so we can change how we save data without rewriting everything.
*/
class UserDataService {
    std::unique_ptr<IDataStorage> storage;
public:
    UserDataService(std::unique_ptr<IDataStorage> s) : storage(std::move(s)) {}
    void saveUserData(const std::string& data) {
        storage->save(data);
    }
};

/*
Dependency Inversion Principle (DIP):
    High-level modules should not depend on low-level modules.
    Both should depend on abstractions.
    And, abstractions should not depend on details; details should depend on abstractions.

 In super simple words:
    “Big, important parts of your program (like UserDataService) shouldn’t directly depend on tiny concrete details (FileStorage, DatabaseStorage).
    Instead, both should depend on something abstract (like an interface IDataStorage).”
*/

int main() {
    // Using file storage
    auto fileStorage = std::make_unique<FileStorage>();
    UserDataService fileService(std::move(fileStorage));
    fileService.saveUserData("User123");

    // Using database storage
    auto dbStorage = std::make_unique<DatabaseStorage>();
    UserDataService dbService(std::move(dbStorage));
    dbService.saveUserData("User456");

    return 0;
}
