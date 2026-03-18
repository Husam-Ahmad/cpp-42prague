/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 11:13:42 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/18 11:16:00 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULES_42_DOG_HPP
#define CPP_MODULES_42_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
    private:
        Brain* DogBrain;
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog& cpy);
        Dog& operator = (const Dog& dog);
        ~Dog();
        void makeSound() const;
        Brain *getBrain() const;
};


#endif //CPP_MODULES_42_DOG_HPP
