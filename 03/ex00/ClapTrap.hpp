/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 19:01:59 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/14 19:02:03 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULES_42_CLAPTRAP_HPP
#define CPP_MODULES_42_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    private:
        std::string Name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public:
        ClapTrap( std::string name);
        ClapTrap( const ClapTrap& cpy );
        ClapTrap& operator = ( const ClapTrap& claptrap );
        ~ClapTrap();
        void attack( const std::string& target );
        void takeDamage( unsigned  int amount);
        void beRapaired( unsigned int amount);

        //Getters
        std::string getName( void ) const;
        int getHitPoints( void ) const;
        int getEnergyPoints( void ) const;
        int getAttackDamage( void ) const;
};

std::ostream &operator<<(std::ostream &out, const ClapTrap &teste);

#endif
