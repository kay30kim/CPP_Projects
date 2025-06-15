#include <iostream>

#include "zombie.hh"

int main() {
    auto z = zombie_horde(30, "D-Family");

    for(auto i=0;i<30;i++) {
        z[i].announce();
    }

    delete[] z;

    return 0;
}