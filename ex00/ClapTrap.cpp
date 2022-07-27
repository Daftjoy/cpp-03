#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->Name = "";
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

void attack(std::string const & target)
{
    
}

