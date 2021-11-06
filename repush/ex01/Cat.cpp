#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "|   Cat  | Constructor.\n";
    this->keda = new Brain;
}
Cat::Cat(const Cat & other)
{
    std::cout << "|   Cat  | Copy Constructor.\n";
    this->keda = new Brain;
    (*this) = other;
}
void    Cat::operator=(const Cat & other)
{
    *(this->keda) = *(other.keda);
    this->type = other.type;
}
Cat::~Cat()
{
    delete this->keda;
    std::cout << "|   Cat  | Destructor.\n";
}
void    Cat::makeSound() const
{
    std::cout << "|   Cat  | Sound!\n";
}