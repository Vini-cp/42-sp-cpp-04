// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef IMATERIASOURCE_H
#define IMATERIASOURCE_H

#include "AMateria.h"
#include <iostream>

class IMateriaSource
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria( AMateria* ) = 0;
    virtual AMateria* createMateria( const std::string& pType ) = 0;
};

#endif
