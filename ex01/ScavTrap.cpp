#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->Name = "";
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;

}

ScavTrap::ScavTrap(std::string Name)
{
    std::cout << "String constructor called" << std::endl;
    this->Name = Name;
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;

}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->Name = other.Name;
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
std::cout << "Destructor called" << std::endl;
}