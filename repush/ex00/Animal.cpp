#include "Animal.hpp"
Animal::Animal(){ std::cout << "| Animal | Constructor.\n"; this->type = "";}

void    Animal::operator=(const Animal & other){ this->type = other.type;}

Animal::Animal(const Animal & other){   (*this) = other;}

Animal::~Animal(){  std::cout << "| Animal | Destructor.\n";}
  
std::string Animal::getType() const {  return(this->type);}

Animal::Animal(std::string type){ this->type = type; std::cout << "| Animal | Copy Constructor.\n";}

void    Animal::makeSound() const { std::cout << "Animal Sound!\n";}