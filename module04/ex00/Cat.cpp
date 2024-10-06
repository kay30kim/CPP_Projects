#include "Cat.hpp"

Cat::Cat() {
	std::cout << this->type << "Cat default constructor called\n";
}
Cat::~Cat() {
	std::cout << this->type << "Cat destructor called\n";
}
void Cat::makeSound() const {
	std::cout << "Yaong\n";
}