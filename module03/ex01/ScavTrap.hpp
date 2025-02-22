#ifndef SCANVTRAP_HPP
#define SCANVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();

    void attack(std::string const& target);
    void guardGate();
};

#endif