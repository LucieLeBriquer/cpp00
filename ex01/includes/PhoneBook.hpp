/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:21:51 by lle-briq          #+#    #+#             */
/*   Updated: 2022/02/15 17:27:24 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# define maxContacts 8

class PhoneBook
{
    private:
		int		_lastIndex;
		Contact	_contacts[maxContacts];

	public:
        PhoneBook();
        ~PhoneBook();
		void	addContact(void);
		void	searchContact(void) const;
};

#endif
