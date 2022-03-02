/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:47:24 by coder             #+#    #+#             */
/*   Updated: 2022/03/02 00:01:09 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : public Animal
{
	public:

		Cat( void );
		Cat( const Cat &aml );
		~Cat( void );

		Cat	&operator=( const Cat &aml );

		void	makeSound( void ) const;

};

#endif
