// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain 
{
public:

    Brain( void );
    Brain( const Brain& prBrain );
    ~Brain( void );

    Brain& operator=( const Brain& prBrain );

    void setIdea( std::string idea );
    unsigned int getNoIdeas( void ) const;
    std::string	getIdea( unsigned int i ) const;

private:

    std::string mIdeas[100];
    unsigned int mNumberOfIdeas;
};

#endif
