/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:20:04 by lle-briq          #+#    #+#             */
/*   Updated: 2021/10/19 19:54:50 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    print_upper(char *str)
{
    int j;

    j = 0;
    while (str[j])
    {
        if (str[j] >= 'a' && str[j] <= 'z')
            std::cout << (char)(str[j] - 'a' + 'A');
        else
            std::cout << str[j];
        j++;
    }
}

int main(int argc, char **argv)
{
    int i;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    i = 0;
    while (++i < argc)
        print_upper(argv[i]);
    std::cout << std::endl;
}