/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:05:04 by lle-briq          #+#    #+#             */
/*   Updated: 2021/10/24 21:45:34 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
    private:
		int			_index;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
	
    public:
        Contact();
		/*Contact(int index, std::string firstName, std::string lastName,
			std::string nickname, std::string phoneNumber,
			std::string darkestSecret);*/
        ~Contact();
		void	fillContact(int index);
		void	displayContact(void) const;
		void	displayContactDetails(void) const;
};

#endif