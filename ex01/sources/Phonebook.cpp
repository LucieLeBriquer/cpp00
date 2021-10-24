/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 20:58:31 by lle-briq          #+#    #+#             */
/*   Updated: 2021/10/24 22:03:34 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	_lastIndex = -1;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

void	Phonebook::addContact(void)
{
	if (_lastIndex >= maxContacts - 1)
		_contacts[maxContacts - 1].fillContact(maxContacts - 1);
	else
	{
		_lastIndex++;
		_contacts[_lastIndex].fillContact(_lastIndex);
	}
	std::cout << std::endl;
}

static void	displayHeader(void)
{
	std::string	header;
	std::string	line(43, '-');

	header += "  Index   |";
	header += "First Name|";
	header += " Last Name|";
	header += " Nickname ";
	std::cout << header << std::endl << line << std::endl;
}

void	Phonebook::searchContact(void) const
{
	int	i;
	int	index;
	std::string	indexStr;

	if (_lastIndex == -1)
	{
		std::cout << "Your phonebook is empty." << std::endl << std::endl;
		return ;
	}
	displayHeader();
	i = -1;
	while (++i <= _lastIndex)
		_contacts[i].displayContact();
	std::cout << std::endl;
	index = -1;
	while (index < 0 || index > _lastIndex)
	{
		std::cout << "Enter a valid index ";
		std::getline(std::cin, indexStr);
		index = std::stoi(indexStr);
	}
	_contacts[index].displayContactDetails();
	std::cout << std::endl;
}