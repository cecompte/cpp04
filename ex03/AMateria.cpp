#include "AMateria.hpp"

// Default constructor
AMateria::AMateria(void)
{
    std::cout << "AMateria default constructor called\n";
    return ;
}

// Copy constructor
AMateria::AMateria(const AMateria &other)
{
    std::cout << "AMateria copy consructor called\n";
    (void) other;
    return ;
}

// Assignment operator overload
AMateria &AMateria::operator=(const AMateria &other)
{
    std::cout << "AMateria assignment operator called\n";
    (void) other;
    return (*this);
}

// Destructor
AMateria::~AMateria(void)
{
    std::cout << "AMateria destructor called\n";
    return ;
}

