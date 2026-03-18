/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 11:13:42 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/18 11:54:53 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    this->DogBrain = new Brain();
    std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {
    this->DogBrain = new Brain();
    std::cout << " Dog Parameter Constructor Called" << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal(cpy) {
    *this = cpy;
    std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog) {
    this->type = dog.type;
    this->DogBrain = new Brain(*dog.DogBrain);
    std::cout << "Dog Copy Assignment Constructor called" << std::endl;
    return (*this);
}

Dog::~Dog() {
    delete this->DogBrain;
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "bark" << std::endl;
}

Brain *Dog::getBrain() const {
    return(this->DogBrain);
}