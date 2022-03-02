/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:17:39 by coder             #+#    #+#             */
/*   Updated: 2022/03/02 19:19:18 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class WrongAnimal {

	protected:

		std::string		_type;
		WrongAnimal( const std::string &type );

	public:

		WrongAnimal( void );
		WrongAnimal( const WrongAnimal &aml );
		~WrongAnimal( void );

		WrongAnimal	&operator=( const WrongAnimal &aml );

		std::string		getType( void ) const;
		void			makeSound( void ) const;

};

#endif
