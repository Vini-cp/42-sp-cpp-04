// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Character.h"

//------------------------------------------------------------------------------

Character::Character( void ) : mName( "" )
{
    for ( int i = 0; i < 4; i++ )
    {
        mpMaterias[ i ] = NULL;
    }
}

//------------------------------------------------------------------------------

Character::Character( const std::string& pName ) : mName( pName )
{
    for ( int i = 0; i < 4; i++ )
    {
        mpMaterias[ i ] = NULL;
    }
}

//------------------------------------------------------------------------------

Character::Character( const Character& prCharacter )
{
    for ( int i = 0; i < 4; i++ )
    {
        mpMaterias[ i ] = NULL;
    }
    *this = prCharacter;
}

//------------------------------------------------------------------------------

Character::~Character( void )
{
    for ( unsigned int i = 0; i < 4; i++ )
    {
        delete mpMaterias[ i ];
    }
}

//------------------------------------------------------------------------------

Character& Character::operator=( const Character &prCharacter )
{
    if (this == &prCharacter) return *this;

    mName = prCharacter.mName;

    for ( unsigned int i = 0; i < 4; i++ )
    {
        delete mpMaterias[ i ];

        if ( prCharacter.mpMaterias[ i ] != NULL )
        {
            mpMaterias[ i ] = prCharacter.mpMaterias[ i ]->clone();
        }
    }

    return *this;
}

//------------------------------------------------------------------------------

const std::string& Character::getName() const
{
    return mName;
}

//------------------------------------------------------------------------------

void Character::equip( AMateria* ppAMateria )
{
    for ( int i = 0; i < 4; i++ )
    {
        if ( mpMaterias[ i ] != NULL )
        {
            mpMaterias[ i ] = ppAMateria;
            return ;
        }
    }
}

//------------------------------------------------------------------------------

void Character::unequip( int idx )
{
    if ( idx >= 0 && idx < 4 && mpMaterias[ idx ] != NULL )
    {
        mpMaterias[ idx ] = NULL;
    }
}

//------------------------------------------------------------------------------

void Character::use( int idx, ICharacter& prTarget )
{
    if ( idx >= 0 && idx < 4 && mpMaterias[ idx ] != NULL )
    {
        mpMaterias[ idx ]->use( prTarget );
    }
}

//------------------------------------------------------------------------------
