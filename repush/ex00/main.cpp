#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"

int     main()
{
    {
        const Animal* meta = new Animal();
        std::cout << "----------------------------------------\n";
        const Animal* j = new Dog();
        std::cout << "----------------------------------------\n";
        const Animal* i = new Cat();
        std::cout << "----------------------------------------\n";
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        std::cout << "----------------------------------------\n";
        i->makeSound();
        std::cout << "----------------------------------------\n";
        j->makeSound();
        std::cout << "----------------------------------------\n";
        meta->makeSound();
        std::cout << "----------------------------------------\n";
        delete meta;
        std::cout << "----------------------------------------\n";
        delete j;
        std::cout << "----------------------------------------\n";
        delete i;
        std::cout << "----------------------------------------\n";
    }
        std::cout << "----------------------------------------\n";
        std::cout << "----------------------------------------\n";
        std::cout << "----------------------------------------\n";
        std::cout << "----------------------------------------\n";
        std::cout << "----------------------------------------\n";
        std::cout << "----------------------------------------\n";
    {
        const WrongAnimal* meta = new WrongAnimal();
        std::cout << "----------------------------------------\n";
        const WrongAnimal* i = new WrongCat();
        std::cout << "----------------------------------------\n";
        std::cout << i->getType() << " " << std::endl;
        std::cout << "----------------------------------------\n";
        i->makeSound();
        std::cout << "----------------------------------------\n";
        meta->makeSound();
        std::cout << "----------------------------------------\n";
        delete meta;
        std::cout << "----------------------------------------\n";
        delete i;
        std::cout << "----------------------------------------\n";
    }
}