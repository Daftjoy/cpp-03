#include "ScavTrap.hpp"

int main(void){
    ScavTrap clap("Hacha");

    clap.attack("Enemy");
    clap.takeDamage(100);
    clap.beRepaired(50);

    clap.guardGate();

}