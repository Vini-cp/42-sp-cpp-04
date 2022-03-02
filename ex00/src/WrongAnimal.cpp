/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:18:55 by coder             #+#    #+#             */
/*   Updated: 2022/03/02 19:34:37 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const std::string &type ) : _type(type)
{
	std::cout << "WrongAnimal type constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &aml )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	_type = aml.getType();
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &aml )
{
	std::cout << "WrongAnimal copy assignment operator called " << std::endl;
	if(this == &aml)
		return (*this);
	_type = aml.getType();
	return (*this);
}

std::string	WrongAnimal::getType( void ) const
{
	return (_type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Wrong Animal sound ..." << std::endl;
}
