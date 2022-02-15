/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:17:38 by lle-briq          #+#    #+#             */
/*   Updated: 2022/02/15 17:27:21 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	printHelp(void)
{
	std::cout << "Use ADD to add a contact to your phonebook." << std::endl;
	std::cout << "Use SEARCH to display your phonebook." << std::endl;
	std::cout << "Use EXIT to quit." << std::endl << std::endl;
}

int main(void)
{
	PhoneBook	phonebook;
	std::string	cmd;

	printHelp();
	while (std::getline(std::cin, cmd))
	{
		if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
			phonebook.searchContact();
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "Try again." << std::endl;
	}
	return (0);
}
