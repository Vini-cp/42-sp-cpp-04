// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "include/Cat.h"
#include "include/Dog.h"
#include "include/WrongCat.h"

int main ( void )
{
    {
        std::cout << "============== Animal ===============" << std::endl;
        const Animal* lAnimal[ 10 ];

        for ( int i = 0; i < 10; i++ )
        {
            if ( i < 5 )
            {
                lAnimal[ i ] = new Dog();
            }
            else
            {
                lAnimal[ i ] = new Cat();
            }
        }

        for ( int i = 0; i < 10; i++ )
        {
            std::cout << std::endl << lAnimal[ i ] << std::endl;
            lAnimal[ i ]->makeSound();
        }

        for ( int i = 0; i < 10; i++ )
        {
            delete lAnimal[ i ];
        }
        std::cout << "=====================================" << std::endl << std::endl;
    }
    {
        std::cout << "============= Cat Brain =============" << std::endl;
        Animal* lCat = new Cat();

        for ( unsigned int i = 0; i < 150; i++ )
        {
            lCat->getBrain()->setIdea( "One Idea ... Meow!" );
        }

        for ( unsigned int i = 0; i < lCat->getBrain()->getNoIdeas() ; i++ )
        {
            std::cout << lCat->getBrain()->getIdea( i ) << std::endl;
        }

        std::cout << std::endl << lCat << std::endl;
        lCat->makeSound();

        delete lCat;
        std::cout << "=====================================" << std::endl << std::endl;
    }
    {
        std::cout << "============= Dog Brain =============" << std::endl;
        Animal* lDog = new Dog();

        for ( unsigned int i = 0; i < 150; i++ )
        {
            lDog->getBrain()->setIdea( "One Idea ... Meow!" );
        }

        for ( unsigned int i = 0; i < lDog->getBrain()->getNoIdeas() ; i++ )
        {
            std::cout << lDog->getBrain()->getIdea( i ) << std::endl;
        }

        std::cout << std::endl << lDog << std::endl;
        lDog->makeSound();

        delete lDog;
        std::cout << "=====================================" << std::endl << std::endl;
    }

    return 0;
}
