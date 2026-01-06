#include "Brain.hpp"

// Default constructor
Brain::Brain(void)
{
    std::cout << "Brain default constructor called\n";
    return ;
}

// Copy constructor
Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy consructor called\n";
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
    return ;
}

// Assignment operator overload
Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain assignment operator called\n";
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return (*this);
}

// Destructor
Brain::~Brain(void)
{
    std::cout << "Brain destructor called\n";
    return ;
}

void    Brain::setIdeas(std::string idea)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = idea;
    return;
}

