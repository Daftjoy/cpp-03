#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap's default constructor called" << std::endl;
    this->Name = "";
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;

}

ScavTrap::ScavTrap(std::string Name)
{
    std::cout << "ScavTrap's string constructor called" << std::endl;
    this->Name = Name;
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;

}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "ScavTrap's copy constructor called" << std::endl;
    this->Name = other.Name;
    this->Hitpoints = other.getHitpoints();
    this->Energy_points = other.getEnergypoints();
    this->Attack_damage = other.getAttackdamage();
}

ScavTrap::~ScavTrap()
{
std::cout << "ScavTrap's destructor called" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << this->getName() << " attack " << target << ", causing " << this->getAttackdamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap has entered in Gate keeper mode" << std::endl;
    this->setHitpoints(this->getHitpoints() + 10);
    this->setEnergypoints(this->getEnergypoints() - 1);
}