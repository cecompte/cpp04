#include "Cat.hpp"

// Default constructor
Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat default constructor called\n";
    return ;
}

// Copy constructor
Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy consructor called\n";
    return ;
}

// Assignment operator overload
Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator called\n";
    if (this != &other)
        Animal::operator=(other); 
    return (*this);
}

// Destructor
Cat::~Cat(void)
{
    std::cout << "Cat destructor called\n";
    return ;
}

void    Cat::makeSound() const
{
    std::cout << "miaou\n";
    return;
}