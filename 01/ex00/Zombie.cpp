/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:02:56 by huahmad           #+#    #+#             */
/*   Updated: 2026/01/17 14:25:01 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Zombie.hpp"

void Zombie::announce( void ) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) {
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
