/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WongAnimal.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:27:35 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/24 09:35:20 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

	protected:

		std::string _type;

	public:

		WrongAnimal();
		WrongAnimal(const std::string type);
		WrongAnimal(const WrongAnimal &rhs);
		virtual ~WrongAnimal();

		WrongAnimal	&operator=(const WrongAnimal &rhs);

		virtual void	makeSound() const;
		void			setType(const std::string type);
		std::string		getType() const;
};

#endif