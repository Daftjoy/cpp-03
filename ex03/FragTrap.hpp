#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string Name);
        FragTrap(const FragTrap &other);
        ~FragTrap();

        /*void attack(std::string const & target);*/
        void highFivesGuys(void);
        
};



#endif