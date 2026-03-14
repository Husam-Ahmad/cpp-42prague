/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 19:19:53 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/14 19:19:55 by huahmad          ###   ########.fr       */
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

//    ScavTrap teste("player1");
//    teste.attack("player2");
//    std::cout << "ScavTrap name: " << teste.getName() << std::endl;
//    std::cout << teste << std::endl;
//    teste.attack("Good-boy");
//    teste.attack("Good-boy");
//    teste.takeDamage(80);
//    std::cout << teste << std::endl;
//    teste.beRapaired(30);
//    std::cout << teste << std::endl;
//    teste.guardGate();

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