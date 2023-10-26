/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:17:08 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/06 11:57:32 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

class PhoneBook {
	
	private:

		Contact	contacts[8];

	public:

		PhoneBook();
		~PhoneBook();

		void	addContact(void);
		void	printContacts(void);
		void	printSpecificContact(void);

		
};

#endif