#include <iostream>

#include "zombie.hh"

std::string Zombie::GROWL = "BraiiiiiiinnnzzzZ...";

Zombie::Zombie(std::string name) : name(name) { }
Zombie::~Zombie() { std::cout<<this->name<<" destructed..\n"; }

void Zombie::announce() {
    std::cout<<this->name<<" : "<<Zombie::GROWL<<std::endl;
}