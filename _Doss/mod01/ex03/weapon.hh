#include <string>

class Weapon {
public:
    Weapon(const Weapon& o)             = delete;
    Weapon& operator=(const Weapon& o)  = delete;

    Weapon(std::string type);
    virtual ~Weapon();
    
    const 
    std::string&  getType();
    void          setType(std::string type);
private:
    std::string type;    
};