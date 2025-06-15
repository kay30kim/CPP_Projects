#include <string>

class Zombie {
public:
    Zombie();
    virtual ~Zombie();

    void announce();
    void zName(std::string);
private:
    static std::string GROWL; //BraiiiiiiinnnzzzZ...

    std::string name;
};

Zombie* zombie_horde(std::size_t N, std::string name);