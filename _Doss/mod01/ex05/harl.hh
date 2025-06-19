#include <string>

class Harl {
public:
    Harl();
    virtual ~Harl();
    
    void debug();
    void info();
    void warning();
    void error();

    void complain(std::string level);
private:

};