/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 15:45:55 by huahmad           #+#    #+#             */
/*   Updated: 2026/01/17 15:52:41 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>  
#include <iostream>
#include <cstdlib>

class Zombie {
    private:
        std::string name;

    public:
        void announce( void );
        std::string getName();
        void setName(std::string name);
        Zombie(std::string name);
        Zombie();
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );
#endif