/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:19:31 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/07 14:03:27 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <limits>
#include <iostream>


int	main(void)
{
	PhoneBook	book;
	std::string	select = "";
	
	while (select.compare("EXIT"))
	{
		std::cout << "Veuillez séléctionner l'option : [EXIT] [ADD] [SEARCH]" << std::endl;
		std::cin >> select;
		if (!select.compare("ADD"))
			book.addContact();
		if (!select.compare("SEARCH"))
		{
			book.printContacts();
			book.printSpecificContact();
		}
		std::cout.clear();
		std::cin.clear();
		
	}
	
	return (EXIT_SUCCESS);
}