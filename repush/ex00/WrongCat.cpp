#include "WrongCat.hpp"
WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "| WrongCat | Constructor.\n";
}
WrongCat::WrongCat(const WrongCat & other)
{
    (*this) = other;
}
void    WrongCat::operator=(const WrongCat & other)
{
    this->type = other.type;
}
WrongCat::~WrongCat()
{
    std::cout << "| WrongCat | Destructor.\n";
}
void    WrongCat::makeSound() const
{
    std::cout << "WrongCat Sound!\n";
}