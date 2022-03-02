/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:21:10 by coder             #+#    #+#             */
/*   Updated: 2022/03/02 19:22:02 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &aml ) : WrongAnimal(aml.getType())
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat &aml )
{
	std::cout << "WrongCat copy assignment operator called " << std::endl;
	WrongAnimal::operator=(aml);
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Meow Meow Meooooow ..." << std::endl;
}
