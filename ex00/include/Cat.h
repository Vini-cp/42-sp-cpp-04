// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef CAT_H
# define CAT_H

# include "Animal.h"

class Cat : public Animal
{
public:

    Cat( void );
    Cat( const Cat &aml );
    virtual ~Cat( void );

    Cat& operator=( const Cat& prCat );

    void makeSound( void ) const;
};

#endif
