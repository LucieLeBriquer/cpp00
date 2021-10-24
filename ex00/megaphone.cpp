/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:20:04 by lle-briq          #+#    #+#             */
/*   Updated: 2021/10/24 19:09:07 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

std::string	print_upper(char *str) 
{
    int 		i;
	std::string	strUp;

    i = 0;
    while (str[i])
    {
        strUp += std::toupper(str[i]);
        i++;
    }
	return (strUp);
}

int main(int argc, char **argv)
{
    int 		i;
	std::string	msgUp;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    i = 0;
    while (++i < argc)
        msgUp += print_upper(argv[i]);
    std::cout << msgUp << std::endl;
	return (0);
}