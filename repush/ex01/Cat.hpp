#ifndef _CAT_HPP
#define _CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain   *keda;
    public:
        Cat();
        Cat(const Cat &);
        void    operator=(const Cat &);
        virtual ~Cat();
        virtual void    makeSound() const;
};
#endif