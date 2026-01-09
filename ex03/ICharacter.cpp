#include "ICharacter.hpp"

// Default constructor
ICharacter::ICharacter(void)
{
    std::cout << "ICharacter default constructor called\n";
    return ;
}

// Copy constructor
ICharacter::ICharacter(const ICharacter &other)
{
    std::cout << "ICharacter copy consructor called\n";
    (void) other;
    return ;
}

// Assignment operator overload
ICharacter &ICharacter::operator=(const ICharacter &other)
{
    std::cout << "ICharacter assignment operator called\n";
    (void) other;
    return (*this);
}

// Destructor
ICharacter::~ICharacter(void)
{
    std::cout << "ICharacter destructor called\n";
    return ;
}

