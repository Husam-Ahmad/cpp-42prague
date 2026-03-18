#include "ScavTrap.hpp"

int main() {
    ScavTrap testing("player1");
    testing.attack("player2");
    std::cout << "ScavTrap name: " << testing.getName() << std::endl;
    std::cout << testing << std::endl;
    testing.attack("Good-boy");
    testing.attack("Good-boy");
    testing.takeDamage(80);
    std::cout << testing << std::endl;
    testing.beRapaired(30);
    std::cout << testing << std::endl;
    testing.guardGate();

//    ClapTrap robot1("player1");
//
//    robot1.attack("player2");
//    std::cout << robot1 << std::endl;
//    robot1.takeDamage(2);
//    std::cout << robot1 << std::endl;
//    robot1.beRapaired(10);
//    std::cout<< robot1 << std::endl;
//    robot1.takeDamage(20);
//    std::cout << robot1 << std::endl;
//    robot1.attack("player3");
//    std::cout << robot1 << std::endl;
//    robot1.beRapaired(100);
//    std::cout << robot1 << std::endl;
//    robot1.takeDamage(30);
//    std::cout << robot1 << std::endl;
    return (0);
}
