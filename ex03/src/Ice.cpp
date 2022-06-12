// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Ice.h"

//------------------------------------------------------------------------------

Ice::Ice( void ) : AMateria( "ice" )
{
    std::cout << "Ice default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Ice::~Ice( void )
{
    std::cout << "Ice destructor called" << std::endl;
}

//------------------------------------------------------------------------------

AMateria* Ice::clone( void ) const
{
    AMateria* lClone = new Ice();

    return lClone;
}

//------------------------------------------------------------------------------

void Ice::use( ICharacter& prTarget )
{
    std::cout << "* shoots an ice bolt at " << prTarget.getName() << " *";
}

//------------------------------------------------------------------------------
