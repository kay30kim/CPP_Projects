#include <string>

class Weapon;

class HumanA {
public:
    HumanA(std::string name, Weapon* weapon);
    virtual ~HumanA();

    void attack();

private:
    std::string name;
    Weapon*     weapon;
};