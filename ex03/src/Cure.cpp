// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Cure.h"

//------------------------------------------------------------------------------

Cure::Cure( void ) : AMateria( "cure" )
{
    std::cout << "Cure default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Cure::~Cure( void )
{
    std::cout << "Cure destructor called" << std::endl;
}

//------------------------------------------------------------------------------

AMateria* Cure::clone( void ) const
{
    AMateria* lClone = new Cure();

    return lClone;
}

//------------------------------------------------------------------------------

void Cure::use( ICharacter& prTarget )
{
    std::cout << "* heals " << prTarget.getName() << "'s wounds *";
}

//------------------------------------------------------------------------------
