#include <iostream>

#include "weapon.hh"
#include "human_b.hh"

HumanB::HumanB(std::string name) : name(name) { }

HumanB::~HumanB() {
    if(this->weapon != nullptr) {
        delete weapon;
    }
}

void HumanB::takeWeapon(Weapon* weapon) { this->weapon = weapon; }

void HumanB::attack() {
    std::cout<<this->name<<" attack with their "<<this->weapon->getType()<<std::endl;
}