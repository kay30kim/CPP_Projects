#include "zombie.hh"

Zombie* newZombie(std::string name) {
    return (new Zombie(name));
}