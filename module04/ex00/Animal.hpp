#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(std::string type);
	virtual ~Animal();
	Animal& operator=(const Animal& rhs);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;
};

#endif