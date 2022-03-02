/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 03:18:15 by coder             #+#    #+#             */
/*   Updated: 2022/03/02 19:36:11 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Cat.hpp"
#include "./include/Dog.hpp"
#include "./include/WrongCat.hpp"

int main ( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* k = i;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	k->makeSound();
	meta->makeSound();

	const WrongAnimal* Wmeta = new WrongAnimal();
	const WrongAnimal* Wi = new WrongCat();

	std::cout << i->getType() << " " << std::endl;

	Wi->makeSound(); //will output the cat sound!
	Wmeta->makeSound();

	delete meta;
	delete j;
	delete i;
	delete Wmeta;
	delete Wi;

	return 0;
}
