#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int     main()
{
    Animal *ptr[3];

    ptr[0] = new Dog;
    ptr[1] = new Cat;
    // ptr[2] = new Animal;
}