#include "FragTrap.hpp"


FragTrap::FragTrap()
{
    std::cout << "FragTrap's default constructor called" << std::endl;
    this->Name = "";
    this->Hitpoints = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;

}

FragTrap::FragTrap(std::string Name)
{
    std::cout << "FragTrap's string constructor called" << std::endl;
    this->Name = Name;
    this->Hitpoints = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;

}

FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "FragTrap's copy constructor called" << std::endl;
    this->Name = other.Name;
    this->Hitpoints = other.getHitpoints();
    this->Energy_points = other.getEnergypoints();
    this->Attack_damage = other.getAttackdamage();
}

FragTrap::~FragTrap()
{
std::cout << "FragTrap's destructor called" << std::endl;
}

/*void FragTrap::attack(std::string const & target)
{
    std::cout << "FragTrap " << this->getName() << " attack " << target << ", causing " << this->getAttackdamage() << " points of damage!" << std::endl;
}*/

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap asks you to give it a High Five" << std::endl;
    this->setEnergypoints(this->getEnergypoints() - 1);
}