#include "DiamondTrap.hpp"

int main(void){
    DiamondTrap clap("Juan");

    clap.attack("Enemy");
    clap.takeDamage(100);
    clap.beRepaired(50);

    clap.highFivesGuys();
    clap.guardGate();

    clap.whoAmI();
}