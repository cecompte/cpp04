#include "Dog.hpp"

// Default constructor
Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Dog default constructor called\n";
    return ;
}

// Copy constructor
Dog::Dog(const Dog &other)
{
    std::cout << "Dog copy consructor called\n";
    (void) other;
    return ;
}

// Assignment operator overload
Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator called\n";
    (void) other;
    return (*this);
}

// Destructor
Dog::~Dog(void)
{
    std::cout << "Dog destructor called\n";
    return ;
}

