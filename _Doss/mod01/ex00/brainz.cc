#include "zombie.hh"

int main() {
    randomChump("Z");
    auto k = newZombie("K");
    k->announce();

    randomChump("V");
    auto D = newZombie("D");
    D->announce();
}