#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap's default constructor called" << std::endl;
    this->Name = "";
    ClapTrap::Name = " _clap_name";
    this->Hitpoints = this->FragTrap::Hitpoints;
    this->Energy_points = this->ScavTrap::Energy_points;
    this->Attack_damage = this->FragTrap::Attack_damage;

}

DiamondTrap::DiamondTrap(std::string Name)
{
    std::cout << "DiamondTrap's string constructor called" << std::endl;
    this->Name = Name;
    ClapTrap::Name = Name + " _clap_name";
    this->Hitpoints = this->FragTrap::Hitpoints;
    this->Energy_points = this->ScavTrap::Energy_points;
    this->Attack_damage = this->FragTrap::Attack_damage;

}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
    std::cout << "DiamondTrap's copy constructor called" << std::endl;
    this->Name = other.Name;
    ClapTrap::Name = other.ClapTrap::Name;
    this->Hitpoints = other.getHitpoints();
    this->Energy_points = other.getEnergypoints();
    this->Attack_damage = other.getAttackdamage();
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap's destructor called" << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap " << Name << " has " << ClapTrap::Name << " as clapTrap name" << std::endl;
    this->setEnergypoints(this->getEnergypoints() - 1);
}