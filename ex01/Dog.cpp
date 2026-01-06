#include "Dog.hpp"

// Default constructor
Dog::Dog(void) : Animal("Dog"), dogBrain(new Brain())
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
    delete dogBrain;
    return ;
}

void    Dog::makeSound() const
{
    std::cout << "wouf\n";
    return;
}

