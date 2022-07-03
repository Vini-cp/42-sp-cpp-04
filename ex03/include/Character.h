// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef CHARACTER_H
#define CHARACTER_H

#include "AMateria.h"
#include "ICharacter.h"
#include <iostream>

class Character : public ICharacter
{
public:
    Character( void );
    Character( const std::string& pName );
    Character( const Character& prCharacter );
    ~Character();

    Character& operator=( const Character& prCharacter );

    std::string const& getName() const;

    void equip( AMateria* ppAMateria );
    void unequip( int idx );
    void use( int idx, ICharacter& prTarget );

private:
    std::string mName;
    AMateria* mpMaterias[ 4 ];

};

#endif
