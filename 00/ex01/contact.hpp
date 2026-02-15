/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:11:58 by huahmad           #+#    #+#             */
/*   Updated: 2026/01/11 18:29:14 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include <unistd.h>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:    
		Contact( void );
		~Contact ( void );
        void SetValues ( std::string Fn, std::string Ln, std::string Nick, std::string Phone, std::string Ds );
        int CheckValues( std::string Fn, std::string Ln, std::string Nick, std::string Phone, std::string Ds );
        std::string GetFirst ( void );
        std::string GetLast ( void );
        std::string GetNick ( void );
        std::string GetPhone ( void );
        std::string GetDark ( void );
        std::string SetString( std::string str );
        int ShowContact ( void );
        void ContactShow( void );
};