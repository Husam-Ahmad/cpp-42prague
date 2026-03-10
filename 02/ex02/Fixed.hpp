/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 17:10:15 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/08 18:31:17 by huahmad          ###   ########.fr       */
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
        bool operator > ( const Fixed& fixed )const;
        bool operator < ( const Fixed& fixed )const;
        bool operator >= ( const Fixed& fixed )const;
        bool operator <= ( const Fixed& fixed )const;
        bool operator == ( const Fixed& fixed )const;
        bool operator != ( const Fixed& fixed )const;
        Fixed operator + ( const Fixed& fixed )const;
        Fixed operator - ( const Fixed& fixed )const;
        Fixed operator * ( const Fixed& fixed )const;
        Fixed operator / ( const Fixed& fixed )const;
        Fixed& operator ++ ( void );
        Fixed& operator -- ( void );
        Fixed operator ++ ( int );
        Fixed operator -- ( int );
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits ( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        const static Fixed& min( const Fixed& a, const Fixed& b );
        static Fixed& min( Fixed& a, Fixed& b );
        const static Fixed& max( const Fixed& a, const Fixed& b );
        static Fixed& max( Fixed& a, Fixed& b );
};

std::ostream & operator<<(std::ostream & out, Fixed const & num);

#endif //CPP_MODULES_42_FIXED_HPP