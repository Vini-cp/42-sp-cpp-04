// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Dog.h"

//------------------------------------------------------------------------------

Dog::Dog( void ) : Animal( "Dog" )
{
    mpBrain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Dog::Dog( const Dog& prDog ) : Animal( prDog )
{
    mpBrain = new Brain();
    std::cout << "Dog copy constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Dog::~Dog( void )
{
    delete mpBrain;
    std::cout << "Dog destructor called" << std::endl;
}

//------------------------------------------------------------------------------

Dog& Dog::operator=( const Dog& prDog )
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if ( this == &prDog ) return *this;

    setType( prDog.getType() );

    return *this;
}

//------------------------------------------------------------------------------

void Dog::makeSound( void ) const
{
    std::cout << "Woof woof woof ..." << std::endl;
}

//------------------------------------------------------------------------------

Brain* Dog::getBrain( void )
{
    return mpBrain;
}

//------------------------------------------------------------------------------
