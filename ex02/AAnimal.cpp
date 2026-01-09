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
