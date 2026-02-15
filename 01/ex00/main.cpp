/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:16:23 by huahmad           #+#    #+#             */
/*   Updated: 2026/01/17 14:24:18 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Zombie.hpp"

int main() {
    Zombie zb;
    Zombie* newzombie = zb.newZombie("Foo");
    Zombie* newzombie2 = zb.newZombie("Foo2");
    zb.randomChump("Foo3");
    std::cout << zb.getName() << std::endl;
    std::cout << newzombie->getName() << std::endl;
    std::cout << newzombie2->getName() << std::endl;

    delete (newzombie);
    delete (newzombie2);
    return (0);
}
