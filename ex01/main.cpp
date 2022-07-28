#include "ClapTrap.hpp"

int main(void){
    ClapTrap clap("Hacha");

    clap.attack("Enemy");
    clap.takeDamage(100);
    clap.beRepaired(50);

}