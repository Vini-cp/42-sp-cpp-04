// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/AMateria.h"

//------------------------------------------------------------------------------

AMateria::AMateria( const std::string& pType ) : mType( pType )
{
}

//------------------------------------------------------------------------------

AMateria::~AMateria( void )
{
}

//------------------------------------------------------------------------------

const std::string& AMateria::getType() const
{
    return mType;
}

//------------------------------------------------------------------------------
