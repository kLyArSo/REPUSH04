#ifndef _WRONGANIMAL_HPP
#define _WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        void    operator=(const WrongAnimal &);
        WrongAnimal(const WrongAnimal &);
        virtual  ~WrongAnimal();

        WrongAnimal(std::string);
        std::string getType() const;
        void    makeSound() const;
};

#endif