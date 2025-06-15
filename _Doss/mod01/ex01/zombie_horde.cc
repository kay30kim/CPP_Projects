#include <iostream>

#include "zombie.hh"

Zombie* zombie_horde(std::size_t N, std::string name) {
    auto zs = new Zombie[N];

    for(std::size_t i=0;i<N;i++) {
        zs[i].zName(name);
    }

    return zs;
}