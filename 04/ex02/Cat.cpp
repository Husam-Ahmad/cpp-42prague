/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 11:13:42 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/18 14:26:32 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    this->CatBrain = new Brain();
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type) {
    this->CatBrain = new Brain();
    std::cout << "Parameter Cat Constructor Called" << std::endl;
}

Cat::Cat(const Cat &cpy) : Animal(cpy){
    *this = cpy;
    std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
    this->type = cat.type;
    this->CatBrain = new Brain(*cat.CatBrain);
    std::cout << "Cat Copy Assignment Contructor Called" << std::endl;
    return (*this);
}

Cat::~Cat() {
    delete this->CatBrain;
    std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "miaow" << std::endl;
}

Brain *Cat::getBrain() const {
    return(this->CatBrain);
}