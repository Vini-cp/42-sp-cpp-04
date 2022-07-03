// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef AMATERIA_H
#define AMATERIA_H

#include "ICharacter.h"
#include <iostream>

class AMateria
{
public:
    AMateria( const std::string& pType );
    virtual ~AMateria( void );

    std::string const& getType( void ) const;

    virtual AMateria* clone( void ) const = 0;
    virtual void use( ICharacter& pTarget ) = 0;

protected:
    std::string mType;

};

#endif
