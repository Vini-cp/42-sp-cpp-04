/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:52:21 by coder             #+#    #+#             */
/*   Updated: 2022/03/02 18:28:55 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const Cat &aml ) : Animal(aml.getType())
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=( const Cat &aml )
{
	std::cout << "Cat copy assignment operator called " << std::endl;
	Animal::operator=(aml);
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow Meow Meooooow ..." << std::endl;
}
