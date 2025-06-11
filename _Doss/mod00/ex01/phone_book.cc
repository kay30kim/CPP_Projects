#include <iostream>
#include <memory>
#include <string>

struct Contact {
    std::string firstName;
    std::string lastName;

    std::string phoneNumber;
    std::string secret;     // I love Spy Family
};

class PhoneBook {
public:
    void add() {
        
    }

    void search() {

    }
private:
    const static std::size_t MAX_SIZE = 8;
    
    Contact* contacts;
    std::size_t currentIndex;
};

int main() {
    auto pb = std::make_unique<PhoneBook>();
    auto cmd = std::string();

    while(true) {
        getline(std::cin, cmd);

        if(cmd.compare("EXIT") == 0) {
            std::exit(0);
        }
    }

    
    return 0;
}