// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/AMateria.h"

//------------------------------------------------------------------------------

AMateria::AMateria( const std::string& pType ) : mType( pType )
{
}

//------------------------------------------------------------------------------

AMateria::AMateria( AMateria const &prAMateria )
{
    *this = prAMateria;
}

//------------------------------------------------------------------------------

AMateria::~AMateria( void )
{
}

//------------------------------------------------------------------------------

AMateria& AMateria::operator=( const AMateria &prAMateria )
{
	if (this == &prAMateria) return *this;

    mType = prAMateria.mType;

	return *this;
}

//------------------------------------------------------------------------------

const std::string& AMateria::getType() const
{
    return mType;
}

//------------------------------------------------------------------------------

void AMateria::use( ICharacter& prTarget )
{
	(void) prTarget;
}

//------------------------------------------------------------------------------
