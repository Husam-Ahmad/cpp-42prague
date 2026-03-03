/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 17:10:15 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/03 17:10:16 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULES_42_FIXED_HPP
#define CPP_MODULES_42_FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int number;
        static const int bitNumber = 8;
    public:
        Fixed();
        Fixed(const Fixed& cpy);
        Fixed& operator = (const Fixed& fixed);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits ( int const raw );
};

#endif 
