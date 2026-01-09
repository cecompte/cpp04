#include "IMateriaSource.hpp"

// Default constructor
IMateriaSource::IMateriaSource(void)
{
    std::cout << "IMateriaSource default constructor called\n";
    return ;
}

// Copy constructor
IMateriaSource::IMateriaSource(const IMateriaSource &other)
{
    std::cout << "IMateriaSource copy consructor called\n";
    (void) other;
    return ;
}

// Assignment operator overload
IMateriaSource &IMateriaSource::operator=(const IMateriaSource &other)
{
    std::cout << "IMateriaSource assignment operator called\n";
    (void) other;
    return (*this);
}

// Destructor
IMateriaSource::~IMateriaSource(void)
{
    std::cout << "IMateriaSource destructor called\n";
    return ;
}

