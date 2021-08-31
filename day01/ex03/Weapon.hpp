#include <iostream>

class Weapon 
{
    private :
    std::string type;
    
    public :
    Weapon(std::string name)
    {
        this->type = name;
    }
    Weapon(void)
    {
        return;
    }
    std::string getType();
    void    setType(std::string type);
};
