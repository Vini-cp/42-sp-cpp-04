// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "AMateria.h"
#include <iostream>

class MateriaSource
{
public:
    MateriaSource( void );
    virtual ~MateriaSource();

    void learnMateria( AMateria* );
    AMateria* createMateria( std::string const& pType );
};

#endif
