#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor called\n";
    return ;
}

// Constructor with type
WrongAnimal::WrongAnimal(std::string t) : type(t)
{
    std::cout << "WrongAnimal default constructor called\n";
    return ;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
    std::cout << "WrongAnimal copy consructor called\n";
    return ;
}

// Assignment operator overload
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "WrongAnimal assignment operator called\n";
    if (this != &other)
        this->type = other.type;
    return (*this);
}

// Destructor
WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called\n";
    return ;
}

std::string    WrongAnimal::getType() const 
{
    return (type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "rrrrrrrr\n";
    return;
}