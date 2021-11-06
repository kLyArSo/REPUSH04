#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "| Dog | Constructor.\n";
    this->type = "Dog";
}
Dog::Dog(const Dog & other)
{
    (*this) = other;
}
void    Dog::operator=(const Dog & other)
{
    this->type = other.type;
}
Dog::~Dog()
{
    std::cout << "| Dog | Destructor.\n";
}

void    Dog::makeSound() const
{
    std::cout << "Dog Sound!\n";
}