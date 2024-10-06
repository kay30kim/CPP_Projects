#include "Animal.hpp"

//Animal::Animal() : type("Animal") {
Animal::Animal() {
	this->type = "Animal";
	std::cout << this->type << "default construtor called\n";
}

Animal::Animal(std::string _type) {
	this->type = _type;
	std::cout << this->type << "type constructor called\n";
}

Animal::~Animal(){
	std::cout << "Animal destructor called\n";
}

void Animal::makeSound() const {
	std::cout << "Animal makeSound called\n";
}

std::string Animal::getType() const{
	return this->type;
}