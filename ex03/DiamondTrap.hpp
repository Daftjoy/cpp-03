#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap();
        DiamondTrap(std::string Name);
        DiamondTrap(const DiamondTrap &other);
        ~DiamondTrap();

        void attack(std::string const & target);
        void whoAmI();
        
    private:
        std::string Name;
};



#endif