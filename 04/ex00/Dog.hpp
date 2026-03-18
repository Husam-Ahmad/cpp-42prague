/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 11:15:42 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/18 11:15:44 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULES_42_DOG_HPP
#define CPP_MODULES_42_DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog& cpy);
        Dog& operator = (const Dog& dog);
        ~Dog();
        void makeSound() const;
};


#endif //CPP_MODULES_42_DOG_HPP
