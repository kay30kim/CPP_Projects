#include <iostream>

#include "zombie.hh"

std::string Zombie::GROWL = "BraiiiiiiinnnzzzZ...";

Zombie::Zombie() { }
Zombie::~Zombie() { std::cout<<this->name<<" destructed..\n"; }

void Zombie::zName(std::string name) { 
    this->name = name; 
}

void Zombie::announce() {
    std::cout<<this->name<<" : "<<Zombie::GROWL<<std::endl;
}