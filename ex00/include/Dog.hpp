/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:56:05 by coder             #+#    #+#             */
/*   Updated: 2022/03/02 00:01:18 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : public Animal
{
	public:

		Dog( void );
		Dog( const Dog &aml );
		~Dog( void );

		Dog	&operator=( const Dog &aml );

		void	makeSound( void ) const;

};

#endif
