/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:30:54 by huahmad           #+#    #+#             */
/*   Updated: 2026/01/14 17:38:54 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <cstdio>
#include "contact.hpp"
#include <cctype>

class Phonebook{
	private:
		Contact Contacts[8];
        int index;
        int max;
	public:
		Phonebook( void );
		~Phonebook( void );
        int AddContact( void );
	    int SearchList ( void );
        void DisplayContact ( void );
		int FinalResult( int index );
		int checklist ( int index, std::string intput_str);
};