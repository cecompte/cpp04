#include "Brain.hpp"

// Default constructor
Brain::Brain(void)
{
    std::cout << "Brain default constructor called\n";
    return ;
}
// Constructor with idea
Brain::Brain(std::string idea)
{
    std::cout << "Brain parametized constructor called\n";
    for (int i = 0; i < 100; i++)
        ideas[i] = idea;
    return ;
}

// Copy constructor
Brain::Brain(const Brain &other)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
    return ;
}

// Assignment operator overload
Brain &Brain::operator=(const Brain &other)
{
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

std::string Brain::getIdeas() const
{
    return(ideas[0]);
}