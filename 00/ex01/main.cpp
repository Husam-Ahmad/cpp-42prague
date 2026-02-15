/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:30:32 by huahmad           #+#    #+#             */
/*   Updated: 2026/01/17 12:34:02 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"
#include <unistd.h>

void	menu( void ) {
	std::cout << "+———————————————————————————————————————+" << std::endl;
	std::cout << "| ADD    → Add contact to the Phonebook |" << std::endl;
	std::cout << "| SEARCH → Search for a contact         |" << std::endl;
	std::cout << "| EXIT   → Exit the program             |" << std::endl;
	std::cout << "+———————————————————————————————————————+" << std::endl;
	std::cout << "→ ";
}

int	main()
{
	Phonebook	pb;
	std::string	Input;
	int error;

    system("clear");
	while (1) {
		menu();
		std::getline(std::cin, Input);
		if (Input == "ADD") {
          error = pb.AddContact();
          if (error == 2)
              break ;
        }
		else if (Input == "SEARCH")
		{
			error = pb.SearchList();
			if (error == 2)
				break ;
		}	
		else if (Input == "EXIT")
			break ;
		else
		{
			if (std::cin.eof())
				break ;
			system("clear");
		}
	}
	return (0);
}