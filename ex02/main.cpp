#include "FragTrap.hpp"

int main(void){
    FragTrap clap("Hacha");

    clap.attack("Enemy");
    clap.takeDamage(100);
    clap.beRepaired(50);

    clap.highFivesGuys();

}