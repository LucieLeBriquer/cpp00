/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:24:11 by lle-briq          #+#    #+#             */
/*   Updated: 2021/10/24 19:59:57 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Please fill your contact informations" << std::endl;
	std::cout << "First name : ";
	std::getline(std::cin, _firstName);
	std::cout << "Last name : ";
	std::getline(std::cin, _lastName);
	std::cout << "Nickname : ";
	std::getline(std::cin, _nickname);
	std::cout << "Phone number : ";
	std::getline(std::cin, _phoneNumber);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, _darkestSecret);
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Destructeur" << std::endl;
	return ;
}
