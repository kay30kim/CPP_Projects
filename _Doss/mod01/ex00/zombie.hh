#include <string>

class Zombie {
public:
    Zombie(std::string name);
    virtual ~Zombie();

    Zombie* newZombie(std::string name);
    void randomChump(std::string name);

private:
    static std::string GROWL; //BraiiiiiiinnnzzzZ...

    std::string name;
};