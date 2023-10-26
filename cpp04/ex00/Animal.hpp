/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:27:35 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/23 14:14:59 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

	protected:

		std::string _type;

	public:

		Animal();
		Animal(const std::string type);
		Animal(const Animal &rhs);
		virtual ~Animal();

		Animal	&operator=(const Animal &rhs);

		virtual void	makeSound() const;
		void			setType(const std::string type);
		std::string		getType() const;
};

#endif