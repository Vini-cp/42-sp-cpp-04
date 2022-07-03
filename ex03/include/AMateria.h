// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef AMATERIA_H
#define AMATERIA_H

#include "ICharacter.h"
#include <iostream>

class ICharacter;

class AMateria
{
public:
    AMateria( const std::string& pType );
    AMateria( AMateria const &prAMateria );
    virtual ~AMateria( void );

    AMateria& operator=( const AMateria &prAMateria );

    std::string const& getType( void ) const;

    virtual AMateria* clone( void ) const = 0;
    virtual void use( ICharacter& pTarget );

protected:
    std::string mType;

};

#endif
