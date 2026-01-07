#include "Animal.hpp"

// Default constructor
Animal::Animal(void) : type("Animal")
{
    std::cout << "Animal default constructor called\n";
    return ;
}

// Constructor with type
Animal::Animal(std::string t) : type(t)
{
    std::cout << "Animal default constructor called\n";
    return ;
}

// Copy constructor
Animal::Animal(const Animal &other) : type(other.type)
{
    return ;
}

// Assignment operator overload
Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
        this->type = other.type;
    return (*this);
}

// Destructor
Animal::~Animal(void)
{
    std::cout << "Animal destructor called\n";
    return ;
}

std::string    Animal::getType() const 
{
    return (type);
}

void    Animal::makeSound() const
{
    std::cout << "rrrrrrrr\n";
    return;
}