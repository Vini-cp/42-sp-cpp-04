// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Brain.h"

//------------------------------------------------------------------------------

Brain::Brain( void ): mNumberOfIdeas( 0 )
{
    std::cout << "Brain default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Brain::Brain( const Brain& prBrain )
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = prBrain;
}

//------------------------------------------------------------------------------

Brain::~Brain( void )
{
    std::cout << "Brain destructor called" << std::endl;
}

//------------------------------------------------------------------------------

Brain& Brain::operator=( const Brain& prBrain )
{
    std::cout << "Brain copy assignment operator called " << std::endl;
    if ( this == &prBrain ) return *this;

    for ( unsigned int i = 0; i < prBrain.getNoIdeas(); i++ )
    {
        setIdea( prBrain.getIdea( i ) );
    }

    return *this;
}

//------------------------------------------------------------------------------

void Brain::setIdea( std::string pIdea )
{
    if ( mNumberOfIdeas < 100 )
    {
        mIdeas[ mNumberOfIdeas ] = pIdea;
        mNumberOfIdeas++;
    }
}

//------------------------------------------------------------------------------

unsigned int Brain::getNoIdeas( void ) const
{
    return mNumberOfIdeas;
}

//------------------------------------------------------------------------------

std::string Brain::getIdea( unsigned int i ) const
{
    if ( i < mNumberOfIdeas ) return ( mIdeas[ i ] );

    return ( "" );
}

//------------------------------------------------------------------------------
