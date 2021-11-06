#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal()
{
    std::cout << "| WrongAnimal | Constructor.\n";
    this->type = "";
}
void    WrongAnimal::operator=(const WrongAnimal & other)
{
    this->type = other.type;
}
WrongAnimal::WrongAnimal(const WrongAnimal & other)
{
    (*this) = other;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "| WrongAnimal | Destructor.\n";
}


WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout << "| WrongAnimal | Copy Constructor.\n";
}
void    WrongAnimal::makeSound() const { std::cout << "WrongAnimal Sound!\n";}
std::string WrongAnimal::getType() const {  return(this->type);}