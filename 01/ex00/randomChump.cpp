/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:15:38 by huahmad           #+#    #+#             */
/*   Updated: 2026/01/17 14:15:44 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Zombie.hpp"

void Zombie::randomChump( std::string name ) {
    Zombie Zombie(name);
    Zombie.announce();
    return ;
}
