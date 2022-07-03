// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef ICHARACTER_H
#define ICHARACTER_H

#include "AMateria.h"
#include <iostream>

class ICharacter
{
public:
    virtual ~ICharacter() {}

    virtual const std::string& getName() const = 0;

    virtual void equip( AMateria* ppAMateria ) = 0;
    virtual void unequip( int idx ) = 0;

    virtual void use( int idx, ICharacter& prTarget ) = 0;
};

#endif
