// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/WrongCat.h"

//------------------------------------------------------------------------------

WrongCat::WrongCat( void ) : WrongAnimal( "WrongCat" )
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

WrongCat::WrongCat( const WrongCat& prWrongCat ) : WrongAnimal( prWrongCat )
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

//------------------------------------------------------------------------------

WrongCat::~WrongCat( void )
{
    std::cout << "WrongCat destructor called" << std::endl;
}

//------------------------------------------------------------------------------

WrongCat& WrongCat::operator=( const WrongCat& prWrongCat )
{
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    if ( this == &prWrongCat ) return *this;

    mType = prWrongCat.mType;

    return *this;
}

//------------------------------------------------------------------------------

void WrongCat::makeSound( void ) const
{
    std::cout << "Meow Meow Meooooow ..." << std::endl;
}

//------------------------------------------------------------------------------
