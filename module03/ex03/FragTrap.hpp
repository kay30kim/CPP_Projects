#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
private:
    FragTrap();

public:
    FragTrap(std::string name);
    ~FragTrap();

    void    highFive( void );
};

#endif // FRAGTRAP_HPP