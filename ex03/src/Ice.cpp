// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Ice.h"

//------------------------------------------------------------------------------

Ice::Ice( void ) : AMateria( "ice" )
{
}

//------------------------------------------------------------------------------

Ice::Ice( const Ice &prIce ) : AMateria( "ice" )
{
    *this = prIce;
}

//------------------------------------------------------------------------------

Ice::~Ice( void )
{
}

//------------------------------------------------------------------------------

Ice& Ice::operator=( const Ice &prIce )
{
    if ( this == &prIce ) return *this;

    mType = prIce.mType;

    return *this;
}

//------------------------------------------------------------------------------

AMateria* Ice::clone( void ) const
{
    return ( new Ice( *this ) );
}

//------------------------------------------------------------------------------

void Ice::use( ICharacter& prTarget )
{
    std::cout << "* shoots an ice bolt at " << prTarget.getName() << " *" << std::endl;
}

//------------------------------------------------------------------------------
