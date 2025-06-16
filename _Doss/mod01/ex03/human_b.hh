#include <string>

class Weapon;

class HumanB {
public:
    HumanB(std::string name);
    virtual ~HumanB();

    void takeWeapon(Weapon* Weapon);
    void attack();
private:
    Weapon*     weapon;
    std::string name;
};