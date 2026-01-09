#include "Character.hpp"

// Default constructor
Character::Character(void)
{
    std::cout << "Character default constructor called\n";
    return ;
}

// Copy constructor
Character::Character(const Character &other)
{
    std::cout << "Character copy consructor called\n";
    (void) other;
    return ;
}

// Assignment operator overload
Character &Character::operator=(const Character &other)
{
    std::cout << "Character assignment operator called\n";
    (void) other;
    return (*this);
}

// Destructor
Character::~Character(void)
{
    std::cout << "Character destructor called\n";
    return ;
}

