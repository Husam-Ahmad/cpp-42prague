/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 11:13:42 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/18 11:55:39 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    this->type = "Wrong Cat";
    std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
    this->type = type;
    std::cout << "WrongCat Parameter Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy) {
    *this = cpy;
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cpy) {
    this->type = cpy.type;
    std::cout << "WrongCat Assignment Copy Constructor Called" << std::endl;
    return (*this);
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Bip bop" << std::endl;
}