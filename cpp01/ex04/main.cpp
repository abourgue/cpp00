/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:31:25 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/11 14:07:22 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	ft_replace(std::string content, std::string s1, std::string s2)
{
	size_t	i = content.find(s1);
	
	while (i != std::string::npos) {
		content.erase(i, s1.size());
		content.insert(i, s2);
		i = content.find(s1);
	}
	return (content);
}

int	main(int ac, char *av[])
{
	if (ac != 4){
		std::cout << "veuillez entrer un nombre d'arguments valide: 3" << std::endl;
		return EXIT_FAILURE;
	}

	std::ifstream	ifs(av[1]);
	if (!ifs.is_open()){
		std::cout << "Invalid file" << std::endl;
		return EXIT_FAILURE;
	}
	std::ofstream	ofs(av[1] + std::string(".replace"));
	std::string		content;

	std::getline(ifs, content, '\0');
	if (content.empty())
		return EXIT_SUCCESS;
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::string	result = ft_replace(content, s1, s2);
	
	ofs << result;
	return EXIT_SUCCESS;
}