#include <string>

class Zombie {
public:
    Zombie(std::string name);
    virtual ~Zombie();

    void announce();
private:
    static std::string GROWL; //BraiiiiiiinnnzzzZ...

    std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);