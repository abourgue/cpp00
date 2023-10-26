/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:18:37 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/09 10:34:35 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::getInput(std::string str) const
{
	std::string	ret = "";
	
	while (1)
	{
		std::cout << str << std::endl;
		std::getline(std::cin, ret);
		if ((std::cin.good()) && (ret.empty()))
			std::cin.clear();
		else
			break;
		std::cout << "Invalid input, please try again!" << std::endl;
	}
	return ret;
}

std::string Contact::checkLen(std::string str) const 
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void	Contact::init(void)
{
	std::cin.ignore();
	this->firstname = this->getInput("Please enter your first name: "); 
	this->lastname = this->getInput("Please enter your last name: "); 
	this->nickname = this->getInput("Please enter your nickname: "); 
	this->phone = this->getInput("Please enter your phone number: "); 
	this->darkS = this->getInput("Please enter your Darkest secret: ");
	return;
}

void	Contact::setIndex(int i)
{
	this->id = i;
	return;
}

void	Contact::printContact(int i)
{
	if (this->firstname.empty())
		return;
	std::cout << "|" << std::setw(10) << i << std::flush;
    std::cout << "|" << std::setw(10) << this->checkLen(this->firstname) << std::flush;
    std::cout << "|" << std::setw(10) << this->checkLen(this->lastname) << std::flush;
    std::cout << "|" << std::setw(10) << this->checkLen(this->nickname) << std::flush;
    std::cout << "|" << std::endl;
	return;
}

void	Contact::printInfos(int i)
{
	if (this->firstname.empty())
		return;
	std::cout << "Index : " << i << std::endl;
	std::cout << "First Name : " << this->firstname << std::endl;
	std::cout << "Last Name : " << this->lastname << std::endl;
	std::cout << "Nickname : " << this->nickname << std::endl;
	std::cout << "Phone Number : " << this->phone << std::endl;
	std::cout << "Darkest Secret : " << this->darkS << std::endl;
	return;
}