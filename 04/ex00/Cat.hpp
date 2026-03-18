/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 11:15:20 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/18 11:15:23 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULES_42_CAT_HPP
#define CPP_MODULES_42_CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat& cpy);
        Cat& operator = (const Cat& cat);
        ~Cat();
        void makeSound() const;
};


#endif //CPP_MODULES_42_CAT_HPP
