/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 02:03:43 by coder             #+#    #+#             */
/*   Updated: 2022/03/02 19:20:20 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal {

	protected:

		std::string		_type;
		Animal( const std::string &type );

	public:

		Animal( void );
		Animal( const Animal &aml );
		virtual ~Animal( void );

		Animal	&operator=( const Animal &aml );

		std::string		getType( void ) const;
		virtual void	makeSound( void ) const;

};

#endif
