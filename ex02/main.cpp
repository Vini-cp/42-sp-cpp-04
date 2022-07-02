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
    // {
    //     std::cout << "============== Animal ===============" << std::endl;
    //         const Animal* lAnimal = new Animal();
    //         delete lDog;
    //     std::cout << "=====================================" << std::endl << std::endl;
    // }

    return 0;
}
