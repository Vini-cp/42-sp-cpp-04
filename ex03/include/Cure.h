// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef CURE_H
#define CURE_H

#include "AMateria.h"
#include "ICharacter.h"
#include <iostream>

class Cure : public AMateria
{
public:
    Cure( void );
    Cure( const Cure &prCure );
    ~Cure( void );

    Cure& operator=( const Cure &prCure );

    AMateria* clone( void ) const;
    void use( ICharacter& pTarget );
};

#endif
