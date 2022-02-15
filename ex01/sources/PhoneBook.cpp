/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 20:58:31 by lle-briq          #+#    #+#             */
/*   Updated: 2022/02/15 17:43:21 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_lastIndex = -1;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::addContact(void)
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

	header += "     Index|";
	header += "First Name|";
	header += " Last Name|";
	header += "  Nickname";
	std::cout << header << std::endl << line << std::endl;
}

static int	stringToInt(std::string str)
{
	int	i;
	int res;

	i = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = 10 * res + str[i] - '0';
		i++;
	}
	if (str[i])
		return (-1);
	return (res);
}

void	PhoneBook::searchContact(void) const
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
		index = stringToInt(indexStr);
	}
	_contacts[index].displayContactDetails();
	std::cout << std::endl;
}
