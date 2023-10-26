/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:48:47 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/09 14:57:51 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "str address \t  = " << &str << std::endl;
	std::cout << "stringPTR address = " << &stringPTR << std::endl;
	std::cout << "stringREF address = " << &stringREF << std::endl << std::endl;
	
	std::cout << "str value \t= " << str << std::endl;
	std::cout << "stringPTR value = " << *stringPTR << std::endl;
	std::cout << "stringREF value = " << stringREF << std::endl;

	return EXIT_SUCCESS;
}