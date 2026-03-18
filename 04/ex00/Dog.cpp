/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 11:15:28 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/18 11:33:46 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    this->type = "Dog";
    std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {
    this->type = type;
    std::cout << " Dog Parameter Constructor Called" << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal(cpy) {
    *this = cpy;
    std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog) {
    this->type = dog.type;
    std::cout << "Dog Copy Assignment Constructor called" << std::endl;
    return (*this);
}

Dog::~Dog() {
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "bark" << std::endl;
}