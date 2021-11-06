#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        void    operator=(const Animal &);
        Animal(const Animal &);
        virtual ~Animal();

        Animal(std::string);
        std::string getType() const;
        virtual void    makeSound() const;

};

#endif