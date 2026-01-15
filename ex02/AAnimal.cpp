#include "AAnimal.hpp"

// Default constructor
AAnimal::AAnimal(void) : type("AAnimal")
{
    std::cout << "AAnimal default constructor called\n";
    return ;
}

// Constructor with type
AAnimal::AAnimal(std::string t) : type(t)
{
    std::cout << "AAnimal parametized constructor called\n";
    return ;
}

// Copy constructor
AAnimal::AAnimal(const AAnimal &other) : type(other.type)
{
    std::cout << "AAnimal copy constructor called\n";
    return ;
}

// Assignment operator overload
AAnimal &AAnimal::operator=(const AAnimal &other)
{
    std::cout << "AAnimal assignment operator called\n";
    if (this != &other)
        type = other.type;
    return (*this);
}

// Destructor
AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal destructor called\n";
    return ;
}

std::string    AAnimal::getType() const 
{
    return (type);
}
