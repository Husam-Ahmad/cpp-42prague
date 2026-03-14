/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 19:20:03 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/14 19:20:04 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULES_42_SCAVTRAP_HPP
#define CPP_MODULES_42_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    private:

    public:
        ScavTrap( std::string name );
        ScavTrap( const ScavTrap& scav );
        ScavTrap& operator = ( const ScavTrap& scav );
        ~ScavTrap();
        void guardGate();
        void attack(const std::string& target);
};

std::ostream &operator<<(std::ostream &out, const ScavTrap &scav);

#endif