// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/AMateria.h"

//------------------------------------------------------------------------------

AMateria::AMateria( std::string const& pType ) : mType( pType )
{
    std::cout << "AMateria default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

std::string const& AMateria::getType() const
{
    return mType;
}

//------------------------------------------------------------------------------

void AMateria::use( ICharacter& prTarget )
{
    (void) prTarget;
}

//------------------------------------------------------------------------------
