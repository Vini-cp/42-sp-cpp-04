// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal
{
public:

    Dog( void );
    Dog( const Dog& prDog );
    virtual ~Dog( void );

    Dog& operator=( const Dog& prDog );

    void makeSound( void ) const;
};

#endif
