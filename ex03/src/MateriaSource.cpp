// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/MateriaSource.h"

//------------------------------------------------------------------------------

MateriaSource::MateriaSource( void )
{
    for ( int i = 0; i < 4; i++ )
    {
        mpMaterias[ i ] = NULL;
    }
}

//------------------------------------------------------------------------------

MateriaSource::MateriaSource( const MateriaSource& prMateriaSource )
{
    for ( int i = 0; i < 4; i++ )
    {
        mpMaterias[ i ] = NULL;
    }

    *this = prMateriaSource;
}

//------------------------------------------------------------------------------

MateriaSource::~MateriaSource( void )
{
    for ( int i = 0; i < 4; i++ )
    {
        delete mpMaterias[ i ];
    }
}

//------------------------------------------------------------------------------

MateriaSource& MateriaSource::operator=( const MateriaSource& prMateriaSource )
{
    if ( this == &prMateriaSource ) return *this;
    
    for ( int i = 0; i < 4; i++ )
    {
        delete mpMaterias[ i ];

        if ( prMateriaSource.mpMaterias[ i ] != NULL )
        {
            mpMaterias[ i ] = prMateriaSource.mpMaterias[ i ]->clone();
        }
    }

    return *this;
}

//------------------------------------------------------------------------------

void MateriaSource::learnMateria( AMateria* ppAMateria )
{
    for ( int i = 0; i < 4; i++ )
    {
        if ( mpMaterias[ i ] == NULL )
        {
            mpMaterias[ i ] = ppAMateria;
            return ;
        }
    }
}

//------------------------------------------------------------------------------

AMateria* MateriaSource::createMateria( const std::string& pType )
{
    for ( int i = 0; i < 4; i++ )
    {
        if ( mpMaterias[ i ]->getType() == pType )
        {
            return ( mpMaterias[ i ]->clone() );
        }
    }

    return NULL;
}

//------------------------------------------------------------------------------
