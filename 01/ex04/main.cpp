/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:22:34 by huahmad           #+#    #+#             */
/*   Updated: 2026/03/02 15:22:36 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <fstream>

std::string replacer(std::string buffer, std::string s1, std::string s2) {
    std::string reader;
    std::size_t past, present = 0;

    while (1) {
        past = present;
        present = buffer.find(s1, present);
        if (present == std::string::npos)
            break ;
        reader.append(buffer, past, present - past);
        reader += s2;
        present += s1.size();
    }
    reader.append(buffer, past, buffer.size() - past);
    return (reader);
}

int main( int ac, char **av ) {
    if ( ac != 4 ) {
        std::cout << "Error! There must be given the correct parameters!" << std::endl;
        return (0);
    }
    std::ofstream outputFile;
    std::ifstream inputFile;
    std::string filename, s1, s2, buffer;

    inputFile.open(av[1]);
    s1 = av[2];
    s2 = av[3];
    if (inputFile.is_open())
    {
        filename = av[1];
        filename.append(".replace");
        outputFile.open(filename.c_str());
        while (std::getline(inputFile, buffer))
        {
            buffer = replacer(buffer, s1, s2);
            outputFile << buffer << std::endl;
        }
        inputFile.close();
        outputFile.close();
        return (0);
    }
    else {
        std::cout << "Error opening the file" << std::endl;
        return (0);
    }
    return (0);
}