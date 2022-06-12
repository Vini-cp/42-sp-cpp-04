// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Cat.h"

//------------------------------------------------------------------------------

Cat::Cat( void ) : Animal( "Cat" )
{
    mpBrain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Cat::Cat( const Cat& prCat ) : Animal( prCat )
{
    mpBrain = new Brain();
    std::cout << "Cat copy constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Cat::~Cat( void )
{
    delete mpBrain;
    std::cout << "Cat destructor called" << std::endl;
}

//------------------------------------------------------------------------------

Cat& Cat::operator=( const Cat& prCat )
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if ( this == &prCat ) return *this;

    setType( prCat.getType() );
    return *this;
}

//------------------------------------------------------------------------------

void Cat::makeSound( void ) const
{
    std::cout << "Meow Meow Meooooow ..." << std::endl;
}

//------------------------------------------------------------------------------

Brain* Cat::getBrain( void )
{
    return mpBrain;
}

//------------------------------------------------------------------------------
