/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:14:53 by huahmad           #+#    #+#             */
/*   Updated: 2026/01/17 12:41:47 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

std::string Contact::GetFirst() {
    return Contact::first_name;
}

std::string Contact::GetLast() {
    return Contact::last_name;
}
std::string Contact::GetNick() {
    return Contact::nickname;
}
std::string Contact::GetPhone() {
    return Contact::phone_number;
}
std::string Contact::GetDark() {
    return Contact::darkest_secret;
}

std::string Contact::SetString( std::string str ) {
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

void Contact::ContactShow( void ) {
    std::cout << "+—————————————————————————————————————————+" << std::endl;
    std::cout << "| First Name:     " << this->GetFirst() << std::endl;
    std::cout << "| Last Name:      " << this->GetLast() << std::endl;
    std::cout << "| Nickname:       " << this->GetNick() << std::endl;
    std::cout << "| Phonenumber:    " << this->GetPhone() << std::endl;
    std::cout << "| Darkest Secret: " << this->GetDark() << std::endl;
    std::cout << "+—————————————————————————————————————————+" << std::endl;
    std::cout << std::endl;
    std::cout << "Type EXIT to leave the contact information" << std::endl;
    std::cout << "→ ";
}

int Contact::ShowContact() {
    std::string str;
    system("clear");
    ContactShow();
    while (1)
    {
        std::getline(std::cin, str);
        if (str == "EXIT")
            break;
        else if (std::cin.eof())
            return (2);
        else {
            system("clear");
            ContactShow();
        }
    }
    return (0);
}
int Contact::CheckValues( std::string Fn, std::string Ln, std::string Nick, std::string Phone, std::string Ds ) {
    if (Fn == "" || Ln == "" || Nick == "" || Phone == "" || Ds == "" )
    {
        system("clear");
        std::cout << "+—————————————————————————————————————————+" << std::endl;
        std::cout << "| Error! There should not be Empty Fields |" << std::endl;
        std::cout << "+—————————————————————————————————————————+" << std::endl;
        usleep(2000000);
        system("clear");
        return (1);
    }
    return (0);
}

void Contact::SetValues(std::string Fn, std::string Ln, std::string Nick, std::string Phone, std::string Ds) {
    this->first_name = Fn;
    this->last_name = Ln;
    this->nickname = Nick;
    this->phone_number = Phone;
    this->darkest_secret = Ds;
    return ;
}