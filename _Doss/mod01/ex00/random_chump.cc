#include "zombie.hh"

void randomChump(std::string name) {
    auto z = Zombie(name);
    z.announce();
}