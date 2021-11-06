#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "|   Dog  | Constructor.\n";
    this->keda = new Brain;
}
Dog::Dog(const Dog & other)
{
    std::cout << "|   Dog  | Copy Constructor.\n";
    this->keda = new Brain;
    (*this) = other;
}
void    Dog::operator=(const Dog & other)
{
    *(this->keda) = *(other.keda);
    this->type = other.type;
}
Dog::~Dog()
{
    delete this->keda;
    std::cout << "|   Dog  | Destructor.\n";
}
void    Dog::makeSound() const
{
    std::cout << "|   Dog  | Sound!\n";
}