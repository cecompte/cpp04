#include "MateriaSource.hpp"

// Default constructor
MateriaSource::MateriaSource(void)
{
    std::cout << "MateriaSource default constructor called\n";
    return ;
}

// Copy constructor
MateriaSource::MateriaSource(const MateriaSource &other)
{
    std::cout << "MateriaSource copy consructor called\n";
    (void) other;
    return ;
}

// Assignment operator overload
MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    std::cout << "MateriaSource assignment operator called\n";
    (void) other;
    return (*this);
}

// Destructor
MateriaSource::~MateriaSource(void)
{
    std::cout << "MateriaSource destructor called\n";
    return ;
}

