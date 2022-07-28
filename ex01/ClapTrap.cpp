#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->Name = "";
    this->Hitpoints = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;

}


ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "Default constructor called" << std::endl;
    this->Name = Name;
    this->Hitpoints = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;

}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->Name = other.Name;
    this->Hitpoints = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
std::cout << "Destructor called" << std::endl;
}


std::string ClapTrap::getName(void) const
{
    return this->Name;
}

int ClapTrap::getHitpoints(void) const
{
    return this->Hitpoints;
}

int ClapTrap::getEnergypoints(void) const
{
    return this->Energy_points;
}

int ClapTrap::getAttackdamage(void) const
{
    return this->Attack_damage;
}

void ClapTrap::setName(std::string name)
{
    this->Name = name;
}

void ClapTrap::setHitpoints(int hitpoints)
{
    this->Hitpoints = hitpoints;
}

void ClapTrap::setEnergypoints(int energypoints)
{
    this->Energy_points = energypoints;
}

void ClapTrap::setAttackdamage(int attackdamage)
{
    this->Attack_damage = attackdamage;
}


void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << this->getName() << " attack " << target << ", causing " << this->getAttackdamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->getName() << " takes " << amount << " points of damage!" << std::endl;
    this->setHitpoints(this->getHitpoints() - amount);
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->getName() << " restores " << amount << " hit points!" << std::endl;
    this->setHitpoints(this->getHitpoints() + amount);
    this->setEnergypoints(this->getEnergypoints() - 1);
}

