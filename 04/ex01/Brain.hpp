/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 11:17:36 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/18 11:17:38 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULES_42_BRAIN_HPP
#define CPP_MODULES_42_BRAIN_HPP

#include <iostream>

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& cpy);
        Brain& operator = (const Brain& cpy);
        ~Brain();
};

#endif //CPP_MODULES_42_BRAIN_HPP
