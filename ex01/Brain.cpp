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
    (void) other;
    return ;
}

// Assignment operator overload
Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain assignment operator called\n";
    (void) other;
    return (*this);
}

// Destructor
Brain::~Brain(void)
{
    std::cout << "Brain destructor called\n";
    return ;
}

