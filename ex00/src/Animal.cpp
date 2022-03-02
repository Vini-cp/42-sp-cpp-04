/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 02:04:06 by coder             #+#    #+#             */
/*   Updated: 2022/03/02 19:35:00 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal( void ) : _type("")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( const std::string &type ) : _type(type)
{
	std::cout << "Animal type constructor called" << std::endl;
}

Animal::Animal( const Animal &aml )
{
	std::cout << "Animal copy constructor called" << std::endl;
	_type = aml.getType();
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=( const Animal &aml )
{
	std::cout << "Animal copy assignment operator called " << std::endl;
	if(this == &aml)
		return (*this);
	_type = aml.getType();
	return (*this);
}

std::string	Animal::getType( void ) const
{
	return (_type);
}

void	Animal::makeSound( void ) const {}
