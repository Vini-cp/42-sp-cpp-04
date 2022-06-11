// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Animal.h"

//------------------------------------------------------------------------------

Animal::Animal( void ) : mType( "" )
{
    std::cout << "Animal default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Animal::Animal( const std::string& pType ) : mType( pType )
{
    std::cout << "Animal default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Animal::Animal( const Animal& prAnimal )
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = prAnimal;
}

//------------------------------------------------------------------------------

Animal::~Animal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

//------------------------------------------------------------------------------

Animal& Animal::operator=( const Animal& prAnimal )
{
    std::cout << "Animal copy assignment operator called " << std::endl;
    if ( this == &prAnimal ) return *this;

    mType = prAnimal.getType();
    return *this;
}

//------------------------------------------------------------------------------

std::string Animal::getType( void ) const
{
    return mType;
}

//------------------------------------------------------------------------------

void Animal::setType( std::string pType )
{
    mType = pType;
}

//------------------------------------------------------------------------------

void Animal::makeSound( void ) const
{
    std::cout << "Animal sound ..." << std::endl;
}

//------------------------------------------------------------------------------

std::ostream& operator<<( std::ostream& os, const Animal* prAnimal )
{
    os << "Animal : " << prAnimal->getType();

    return os;
}

//------------------------------------------------------------------------------
