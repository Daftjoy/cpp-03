#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "Default constructor called" << std::endl;
    this->Name = Name;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->Name = other.Name;
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
    std::cout << "ClapTrap " << this->getName() << " attack " << target << ", causing" << this->getAttackdamage() << " points of damage !" << std::endl;
}

