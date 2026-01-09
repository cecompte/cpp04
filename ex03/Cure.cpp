#include "Cure.hpp"

// Default constructor
Cure::Cure(void)
{
    std::cout << "Cure default constructor called\n";
    return ;
}

// Copy constructor
Cure::Cure(const Cure &other)
{
    std::cout << "Cure copy consructor called\n";
    (void) other;
    return ;
}

// Assignment operator overload
Cure &Cure::operator=(const Cure &other)
{
    std::cout << "Cure assignment operator called\n";
    (void) other;
    return (*this);
}

// Destructor
Cure::~Cure(void)
{
    std::cout << "Cure destructor called\n";
    return ;
}

