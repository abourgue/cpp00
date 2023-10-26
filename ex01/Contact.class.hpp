/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:17:26 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/07 13:52:29 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>

class Contact {
	
private:

	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone;
	std::string	darkS;
	int			id;

	std::string	getInput(std::string str) const;
	std::string	checkLen(std::string str) const;
	
public:
	
	Contact(void);
	~Contact(void);

	void	init(void);
	void	setIndex(int i);
	void	printInfos(int i);
	void	printContact(int i);
};

#endif