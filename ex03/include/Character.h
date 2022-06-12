// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef CHARACTER_H
#define CHARACTER_H

#include "AMateria.h"
#include <iostream>

class Character
{
public:
    Character( std::string const& pName);
    virtual ~Character();

    std::string const& getName() const;

    void equip( AMateria* ppAMateria );
    void unequip( int idx );

    void use( int idx, ICharacter& prTarget );

    AMateria* getAMateria( int idx );

private:
    std::string mName;
    AMateria* mpMaterias[ 4 ];
    int mEquipedMaterias;

};

#endif
