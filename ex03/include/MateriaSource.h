// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "AMateria.h"
#include "IMateriaSource.h"
#include <iostream>

class MateriaSource : public IMateriaSource
{
public:
    MateriaSource( void );
    MateriaSource( const MateriaSource& prMateriaSource );
    virtual ~MateriaSource();

    MateriaSource& operator=( const MateriaSource& prMateriaSource );

    void learnMateria( AMateria* );
    AMateria* createMateria( const std::string& pType );

private:
    AMateria *mpMaterias[ 4 ];

};

#endif
