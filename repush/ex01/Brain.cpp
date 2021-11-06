#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "| Brain  | Constructor\n";
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "Empty Idea";
}
Brain::Brain(const Brain & other)
{
    (*this) = other;
}
void    Brain::operator=(const Brain &other)
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
}
Brain::~Brain()
{
    std::cout << "| Brain  | Destructor\n";
}