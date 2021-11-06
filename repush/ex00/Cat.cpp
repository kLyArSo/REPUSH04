#include "Cat.hpp"
Cat::Cat()
{
    this->type = "Cat";
    std::cout << "| Cat | Constructor.\n";
}
Cat::Cat(const Cat & other)
{
    (*this) = other;
}
void    Cat::operator=(const Cat & other)
{
    this->type = other.type;
}
Cat::~Cat()
{
    std::cout << "| Cat | Destructor.\n";
}
void    Cat::makeSound() const
{
    std::cout << "Cat Sound!\n";
}