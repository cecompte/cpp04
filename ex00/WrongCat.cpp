#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called\n";
    return ;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "WrongCat copy consructor called\n";
    return ;
}

// Assignment operator overload
WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat assignment operator called\n";
    if (this != &other)
        WrongAnimal::operator=(other); 
    return (*this);
}

// Destructor
WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called\n";
    return ;
}

void    WrongCat::makeSound() const
{
    std::cout << "miaou\n";
    return;
}