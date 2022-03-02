/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:19:27 by coder             #+#    #+#             */
/*   Updated: 2022/03/02 19:22:34 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

		WrongCat( void );
		WrongCat( const WrongCat &aml );
		~WrongCat( void );

		WrongCat	&operator=( const WrongCat &aml );

		void	makeSound( void ) const;

};

#endif
