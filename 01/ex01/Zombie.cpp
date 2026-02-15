/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 15:49:28 by huahmad           #+#    #+#             */
/*   Updated: 2026/01/17 15:51:43 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void ) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

Zombie::Zombie() {
    this->name = "something(default)";
}

std::string Zombie::getName() {
    return (this->name);
}

Zombie::~Zombie() {
    std::cout << "Zombie: " << this->name << " has been destroyed!" << std::endl;
}
