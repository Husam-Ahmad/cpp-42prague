/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 11:13:42 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/18 11:16:00 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULES_42_ANIMAL_HPP
#define CPP_MODULES_42_ANIMAL_HPP

#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& cpy);
        Animal& operator = (const Animal& animal);
        virtual ~Animal();
        void setType(std::string type);
        std::string getType() const;
        virtual void makeSound() const;
};

#endif //CPP_MODULES_42_ANIMAL_HPP
