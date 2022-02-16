/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:24:11 by lle-briq          #+#    #+#             */
/*   Updated: 2022/02/15 17:42:35 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::fillContact(int index)
{
	_index = index;
	std::cout << "Please fill the following informations." << std::endl;
	std::cout << std::setw(17) << "First name  ";
	std::getline(std::cin, _firstName);
	std::cout << std::setw(17) << "Last name  ";
	std::getline(std::cin, _lastName);
	std::cout << std::setw(17) << "Nickname  ";
	std::getline(std::cin, _nickname);
	std::cout << std::setw(17) << "Phone number  ";
	std::getline(std::cin, _phoneNumber);
	std::cout << std::setw(17) << "Darkest secret  ";
	std::getline(std::cin, _darkestSecret);
}

void	Contact::setIndex(int index)
{
	_index = index;
}

static void	printTenChar(std::string str)
{
	int			len;
	std::string	spaces(10, ' ');

	len = str.length();
	if (len <= 10)
		std::cout << spaces.substr(0, 10 - len) << str;
	else
		std::cout << str.substr(0, 9) << '.';
}

void	Contact::displayContact(void) const
{
	std::string		index = "";

	index += _index + '0';
	printTenChar(index);
	std::cout << "|";
	printTenChar(_firstName);
	std::cout << "|";
	printTenChar(_lastName);
	std::cout << "|";
	printTenChar(_nickname);
	std::cout << std::endl;
}

void	Contact::displayContactDetails(void) const
{
	std::cout << std::setw(17) << "First name  " << _firstName << std::endl;
	std::cout << std::setw(17) << "Last name  " << _lastName << std::endl;
	std::cout << std::setw(17) << "Nickname  " << _nickname << std::endl;
	std::cout << std::setw(17) << "Phone number  " << _phoneNumber << std::endl;
	std::cout << std::setw(17) << "Darkest secret  " << _darkestSecret << std::endl;;
}
