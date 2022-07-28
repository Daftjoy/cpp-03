#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <iomanip>
# include <limits>
# include <string>
# include <cstdlib>
# include <cmath>

class ClapTrap
{
    private:
        std::string Name;
        int Hitpoints;
        int Energy_points;
        int Attack_damage;

    public:
        ClapTrap(std::string Name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &other);

        std::string getName(void) const;
        int getHitpoints(void) const;
        int getEnergypoints(void) const;
        int getAttackdamage(void) const;

        void setName(std::string name);
        void setHitpoints(int hitpoints);
        void setEnergypoints(int energypoints);
        void setAttackdamage(int attackdamage);

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif