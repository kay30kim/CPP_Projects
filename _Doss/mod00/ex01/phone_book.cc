#include <iostream>
#include <memory>
#include <string>
#include <cstdarg>
#include <cassert>

struct Contact {
    std::string firstName   = "";
    std::string lastName    = "";
    std::string nickName    = "";
    std::string phoneNumber = "";
    std::string secret      = "";     // I love Spy Family
};

class PhoneBook {
public:
    PhoneBook() : 
    contacts(new Contact[MAX_SIZE]), 
    currentIndex(0),
    endOfIndex(0)
    { }

    void add(Contact contact) {
        if(currentIndex == MAX_SIZE) currentIndex = 0;
        
        contacts[currentIndex] = contact;
        currentIndex++;
        endOfIndex = endOfIndex == MAX_SIZE ? MAX_SIZE : endOfIndex + 1;
    }

    void search() {
        displayContactList();
    }
private:
    typedef char* va_list;

    const static std::size_t MAX_SIZE = 8;
    
    Contact* contacts;
    std::size_t currentIndex;
    std::size_t endOfIndex;

    std::string formatField(const std::string& input) {
        const auto width = 10;
        
        if (input.length() > width) {
            return input.substr(0, width - 1) + ".";
        } 
        else {
            return std::string(width - input.length(), ' ') + input;
        }
    }

    template <typename T>
    void handleColumn(const T& arg) {
        std::cout<<formatField(arg)<<std::endl;
    }

    template <typename T, typename... Types>
    void handleColumn(const T& param, const Types&... args) {
        std::cout<<formatField(param)<<"|";
        handleColumn(args...);
    }

    void displayContactList() {
        std::cout<<"Please input index to display\n";
        handleColumn("Index", "First Name", "Last Name", "Nick Name");
        
        for(std::size_t i=0;i<MAX_SIZE;i++) {
            auto cont = contacts[i];
            
            if(cont.firstName.empty()) break;

            handleColumn(
                std::to_string(i + 1), // WTF??
                cont.firstName, 
                cont.lastName, 
                cont.nickName
            );
        }

        std::size_t idx = 0;
        std::cin >> idx;

        if(idx > endOfIndex || idx == 0) {
            std::cout<<"You input invalid index\n";
        }
        else {
            auto cont = contacts[idx - 1];
            
            //KHHHaaaaaaaaaaah
            std::cout<<cont.firstName<<std::endl;
            std::cout<<cont.lastName<<std::endl;
            std::cout<<cont.nickName<<std::endl;
            std::cout<<cont.phoneNumber<<std::endl;
            std::cout<<cont.secret<<std::endl;
        }
    }
};

auto handle_field_input(std::string msg) -> std::string {
    auto value = std::string("");

    while(value.empty() == true) {
        std::cout<<msg<<"(No empty value allowed!)"<<std::endl;
        getline(std::cin, value);
    }

    return value;
}

auto get_contact() -> Contact {
    return Contact {
        .firstName   = handle_field_input("Please input first name"),
        .lastName    = handle_field_input("Please input last name"),
        .nickName    = handle_field_input("Please input nick name"),
        .phoneNumber = handle_field_input("Please input phone number"),
        .secret      = handle_field_input("Please input secret")
    };
}

int main() {
    auto pb = std::make_unique<PhoneBook>();
    auto cmd = std::string();

    while(true) {
        std::cout<<"Please input command(ADD, SEARCH, EXIT)\n";

        getline(std::cin, cmd);

        if(cmd.compare("ADD") == 0) {
            auto contact = get_contact();
            pb->add(contact);
        }

        if(cmd.compare("SEARCH") == 0) {
            pb->search();
        }

        if(cmd.compare("EXIT") == 0) {
            std::exit(0);
        }

        std::cin.clear();
    }

    
    return 0;
}