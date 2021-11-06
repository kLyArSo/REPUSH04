#ifndef _CAT_HPP
#define _CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:
        ;
    public:
        Cat();
        Cat(const Cat &);
        void    operator=(const Cat &);
        virtual void    makeSound() const;
        virtual ~Cat();
};
#endif