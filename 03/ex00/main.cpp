/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 19:02:10 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/14 19:02:12 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap robot1("player1");

    robot1.attack("player2");
    std::cout << robot1 << std::endl;
    robot1.takeDamage(2);
    std::cout << robot1 << std::endl;
    robot1.beRapaired(10);
    std::cout<< robot1 << std::endl;
    robot1.takeDamage(20);
    std::cout << robot1 << std::endl;
    robot1.attack("player3");
    std::cout << robot1 << std::endl;
    robot1.beRapaired(100);
    std::cout << robot1 << std::endl;
    robot1.takeDamage(30);
    std::cout << robot1 << std::endl;
    return (0);
}