// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "./include/Cat.h"
#include "./include/Dog.h"
#include "./include/WrongCat.h"

int main ( void )
{
    {
        std::cout << "================ Cat ================" << std::endl;
        const Animal* lCat = new Cat();

        std::cout << std::endl << lCat << std::endl;
        lCat->makeSound();

        delete lCat;
        std::cout << "=====================================" << std::endl << std::endl;
    }
    {
        std::cout << "================ Dog ================" << std::endl;
            const Animal* lDog = new Dog();

            std::cout << std::endl << lDog << std::endl;
            lDog->makeSound();

            delete lDog;
        std::cout << "=====================================" << std::endl << std::endl;
    }
    {
        std::cout << "============= Cat & Dog =============" << std::endl;
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();

        delete meta;
        delete j;
        delete i;
        std::cout << "=====================================" << std::endl << std::endl;
    }
    {
        std::cout << "============= Wrong Cat =============" << std::endl;
        const WrongAnimal* lWrongCat = new WrongCat();

        std::cout << std::endl << lWrongCat << std::endl;
        lWrongCat->makeSound();

        delete lWrongCat;
        std::cout << "=====================================" << std::endl << std::endl;
    }
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
        std::cout << "=============== Brain ===============" << std::endl;
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

    return 0;
}
