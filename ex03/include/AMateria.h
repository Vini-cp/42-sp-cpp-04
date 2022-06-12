// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef AMATERIA_H
#define AMATERIA_H

#include "ICharacter.h"
#include <iostream>

class AMateria
{
public:
    AMateria( std::string const& pType );

    std::string const& getType( void ) const;
    virtual AMateria* clone( void ) const = 0;
    virtual void use( ICharacter& pTarget );

protected:
    std::string mType;

};

#endif
