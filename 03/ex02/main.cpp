/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 19:19:53 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/16 17:54:52 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ScavTrap Scav("player1");
    FragTrap Frag("player2");

    Scav.attack("player3");
    Frag.attack("player4");
    std::cout << "ScavTrap name: " << Scav.getName() << std::endl;
    std::cout << "FragTrap name: " << Frag.getName() << std::endl;
    std::cout << Scav << std::endl;
    std::cout << Frag << std::endl;
    Scav.guardGate();
    Frag.highFivesGuys();

//    ScavTrap testing("player1");
//    testing.attack("player2");
//    std::cout << "ScavTrap name: " << testing.getName() << std::endl;
//    std::cout << testing << std::endl;
//    testing.attack("Good-boy");
//    testing.attack("Good-boy");
//    testing.takeDamage(80);
//    std::cout << testing << std::endl;
//    testing.beRapaired(30);
//    std::cout << testing << std::endl;
//    testing.guardGate();

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