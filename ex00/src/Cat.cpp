// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Cat.h"

//------------------------------------------------------------------------------

Cat::Cat( void ) : Animal( "Cat" )
{
    std::cout << "Cat default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Cat::Cat( const Cat& prCat ) : Animal( prCat )
{
    std::cout << "Cat copy constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Cat::~Cat( void )
{
    std::cout << "Cat destructor called" << std::endl;
}

//------------------------------------------------------------------------------

Cat& Cat::operator=( const Cat& prCat )
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if ( this == &prCat ) return *this;

    mType = prCat.mType;

    return *this;
}

//------------------------------------------------------------------------------

void Cat::makeSound( void ) const
{
    std::cout << "Meow Meow Meooooow ..." << std::endl;
}

//------------------------------------------------------------------------------
