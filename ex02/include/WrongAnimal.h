// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
public:

    WrongAnimal( void );
	WrongAnimal( const std::string& pType );
    WrongAnimal( const WrongAnimal& prWrongAnimal );
    ~WrongAnimal( void );

    WrongAnimal& operator=( const WrongAnimal& prWrongAnimal );

    std::string getType( void ) const;
    void setType( std::string pType );
    void makeSound( void ) const;

protected:

    std::string mType;
};

std::ostream& operator<<( std::ostream& os, const WrongAnimal* prWrongAnimal );

#endif
