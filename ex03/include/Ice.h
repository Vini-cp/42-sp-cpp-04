// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef ICE_H
#define ICE_H

#include "AMateria.h"
#include "ICharacter.h"
#include <iostream>

class Ice : public AMateria
{
public:
    Ice( void );
    ~Ice( void );

    AMateria* clone( void ) const;
    void use( ICharacter& pTarget );
};

#endif
