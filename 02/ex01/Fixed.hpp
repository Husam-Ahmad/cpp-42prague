/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 17:10:15 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/08 18:29:17 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULES_42_FIXED_HPP
#define CPP_MODULES_42_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int number;
        static const int bitNumber = 8;
    public:
        Fixed();
        Fixed( const int integer );
        Fixed ( const float number );
        Fixed( const Fixed& cpy );
        Fixed& operator = ( const Fixed& fixed );
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits ( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream & operator<<(std::ostream & out, Fixed const & num);

#endif