#ifndef _DOG_HPP
#define _DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:
        ;
    public:
        Dog();
        Dog(const Dog &);
        void    operator=(const Dog &);
        virtual ~Dog();

        virtual void    makeSound() const;
};


#endif