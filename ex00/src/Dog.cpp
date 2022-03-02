/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:56:45 by coder             #+#    #+#             */
/*   Updated: 2022/03/02 18:29:50 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog &aml ) : Animal(aml.getType())
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=( const Dog &aml )
{
	std::cout << "Dog copy assignment operator called " << std::endl;
	Animal::operator=(aml);
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof woof woof ..." << std::endl;
}
