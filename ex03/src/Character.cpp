// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Character.h"

//------------------------------------------------------------------------------

Character::Character( std::string const& pName ) : mName( pName )
{
    mEquipedMaterias = 0;
    for ( int i = 0; i < 4; i++ )
    {
        mpMaterias[ i ] = NULL;
    }
    std::cout << "Character default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Character::~Character( void )
{
    delete mpMaterias;
    std::cout << "Character default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

std::string const& Character::getName() const
{
    return mName;
}

//------------------------------------------------------------------------------

void Character::equip( AMateria* ppAMateria )
{
    if ( mEquipedMaterias < 4 )
    {
        for ( int i = 0; i < 4; i++ )
        {
            if ( mpMaterias[ i ] != NULL )
            {
                mpMaterias[ i ] = ppAMateria;
                mEquipedMaterias++;
            }
        }
    }
}

//------------------------------------------------------------------------------

void Character::unequip( int idx )
{
    if ( mpMaterias[ idx ] != NULL )
    {
        mpMaterias[ idx ] = NULL;
        mEquipedMaterias--;
    }
}

//------------------------------------------------------------------------------

void Character::use( int idx, ICharacter& prTarget )
{
    AMateria* lMateria = prTarget.getAMateria( idx );

    if ( lMateria )
    {
        lMateria->use( prTarget );
    }
}

//------------------------------------------------------------------------------

AMateria* Character::getAMateria( int idx )
{
    return mpMaterias[ idx ];
}

//------------------------------------------------------------------------------
