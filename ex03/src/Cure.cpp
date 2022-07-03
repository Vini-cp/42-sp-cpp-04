// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Cure.h"

//------------------------------------------------------------------------------

Cure::Cure( void ) : AMateria( "cure" )
{
}

//------------------------------------------------------------------------------

Cure::Cure( const Cure &prCure ) : AMateria("cure")
{
    *this = prCure;
}

//------------------------------------------------------------------------------

Cure::~Cure( void )
{
}

//------------------------------------------------------------------------------

Cure& Cure::operator=( const Cure &prCure )
{
    if ( this == &prCure ) return *this;

    mType = prCure.mType;

    return *this;
}

//------------------------------------------------------------------------------

AMateria* Cure::clone( void ) const
{
    AMateria* lClone = new Cure( *this );

    return lClone;
}

//------------------------------------------------------------------------------

void Cure::use( ICharacter& prTarget )
{
    std::cout << "* heals " << prTarget.getName() << "'s wounds *" << std::endl;
}

//------------------------------------------------------------------------------
