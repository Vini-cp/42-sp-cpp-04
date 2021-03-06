// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "Brain.h"

class Animal
{
public:

    Animal( void );
    Animal( const std::string& pType );
    Animal( const Animal& prAnimal );
    virtual ~Animal( void );

    Animal& operator=( const Animal& prAnimal );

    virtual std::string getType( void ) const;
    virtual void makeSound( void ) const = 0;
    virtual Brain* getBrain( void ) = 0;

protected:

    std::string mType;
};

std::ostream& operator<<( std::ostream& os, const Animal* prAnimal );

#endif
