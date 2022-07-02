// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/WrongAnimal.h"

//------------------------------------------------------------------------------

WrongAnimal::WrongAnimal( void ) : mType( "" )
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

WrongAnimal::WrongAnimal( const std::string& pType ) : mType( pType )
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

WrongAnimal::WrongAnimal( const WrongAnimal& prWrongAnimal )
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = prWrongAnimal;
}

//------------------------------------------------------------------------------

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

//------------------------------------------------------------------------------

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& prWrongAnimal )
{
    std::cout << "WrongAnimal copy assignment operator called " << std::endl;
    if ( this == &prWrongAnimal ) return *this;

    mType = prWrongAnimal.mType;

    return *this;
}

//------------------------------------------------------------------------------

std::string WrongAnimal::getType( void ) const
{
    return mType;
}

//------------------------------------------------------------------------------

void WrongAnimal::setType( std::string pType )
{
    mType = pType;
}

//------------------------------------------------------------------------------

void WrongAnimal::makeSound( void ) const
{
    std::cout << "WrongAnimal sound ..." << std::endl;
}

//------------------------------------------------------------------------------

std::ostream& operator<<( std::ostream& os, const WrongAnimal* prWrongAnimal )
{
    os << "WrongAnimal : " << prWrongAnimal->getType();

    return os;
}

//------------------------------------------------------------------------------
