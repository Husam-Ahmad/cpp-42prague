/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:22:48 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/02 15:22:49 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType() {
    return (this->type);
}

void Weapon::setType( std::string newtype ) {
    this->type = newtype;
    return ;
}

Weapon::Weapon(std::string name) {
    this->type = name;
}

Weapon::Weapon() {

}

Weapon::~Weapon() {

}