#include "Ice.hpp"

// Default constructor
Ice::Ice(void)
{
    std::cout << "Ice default constructor called\n";
    return ;
}

// Copy constructor
Ice::Ice(const Ice &other)
{
    std::cout << "Ice copy consructor called\n";
    (void) other;
    return ;
}

// Assignment operator overload
Ice &Ice::operator=(const Ice &other)
{
    std::cout << "Ice assignment operator called\n";
    (void) other;
    return (*this);
}

// Destructor
Ice::~Ice(void)
{
    std::cout << "Ice destructor called\n";
    return ;
}

