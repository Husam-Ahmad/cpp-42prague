/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 15:52:18 by huahmad           #+#    #+#             */
/*   Updated: 2025/12/31 15:54:29 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for (int i = 1; i < argc; ++i)
    {
        for (char *p = argv[i]; *p != '\0'; ++p)
        {
            std::cout << static_cast<char>(std::toupper(*p));
        }
    }
    std::cout << std::endl;
    return 0;
}