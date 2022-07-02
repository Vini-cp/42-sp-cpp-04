// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
public:

    WrongCat( void );
    WrongCat( const WrongCat &aml );
    ~WrongCat( void );

    WrongCat& operator=( const WrongCat& prWrongCat );

    void makeSound( void ) const;
};

#endif
