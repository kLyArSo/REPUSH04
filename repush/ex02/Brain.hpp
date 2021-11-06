#ifndef _BRAIN_HPP
#define _BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &);
        void    operator=(const Brain &);
        ~Brain();
};

#endif
