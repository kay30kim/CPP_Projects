#include <iostream>

#include "weapon.hh"

Weapon::Weapon(std::string type) : type(type) { }

Weapon::~Weapon() { std::cout<<this->getType()<<" has been destroyed!\n"; }

const
std::string& Weapon::getType() { return this->type; }

void Weapon::setType(std::string type) { this->type = type; }
