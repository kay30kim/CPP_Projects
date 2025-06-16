#include <iostream>

#include "human_a.hh"
#include "weapon.hh"

HumanA::HumanA(std::string name, Weapon* weapon) : name(name), weapon(weapon) { }

HumanA::~HumanA() { delete weapon; }

void HumanA::attack() {
    std::cout<<this->name<<" attack with their "<<this->weapon->getType()<<std::endl;
}