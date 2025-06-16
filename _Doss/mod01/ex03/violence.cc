#include "human_a.hh"
#include "human_b.hh"
#include "weapon.hh"

int main() {
    {
        auto hammer = new Weapon("War Hammer");

        HumanA sigma("Sigma", hammer);
        sigma.attack();

        hammer->setType("Thunder Bolt");
        sigma.attack();
    }

    {
        auto mjolnir = new Weapon("Mjolnir");
        
        HumanB thor("Thor");

        //He got the qualification for Mjolnir!
        thor.takeWeapon(mjolnir);
        thor.attack(); //Thunder attack~~ Zizizizizizizyk!
        
        mjolnir->setType("Thunder Break");
        thor.attack(); //Die Thanos!
    }
}