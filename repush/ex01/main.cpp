#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"


int     main()
{
    Animal *array[10];
    int i = 0;
    while(i <= 4)
        array[i++] = new Dog;
    while(i <= 9)
        array[i++] = new Cat;
    while(--i >= 0)
        delete array[i];
    std::cout << "aaaaaaaaaaaa\n";
    Dog kda;
    {
        Dog nam(kda);
        std::cout << "bbbbbbbbbbbbbb\n";
    }
        std::cout << "ccccccccccccccc\n";
}