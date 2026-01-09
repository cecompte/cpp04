#include "Ice.hpp"

// Default constructor
Ice::Ice(void) : AMateria("ice")
{
    std::cout << "Ice default constructor called\n";
    return ;
}

// Copy constructor
Ice::Ice(const Ice &other) : AMateria(other)
{
    std::cout << "Ice copy consructor called\n";
    return ;
}

// Assignment operator overload
Ice &Ice::operator=(const Ice &other)
{
    std::cout << "Ice assignment operator called\n";
    if (this != &other)
        AMateria::operator=(other); 
    return (*this);
}

// Destructor
Ice::~Ice(void)
{
    std::cout << "Ice destructor called\n";
    return ;
}

// Member functions
AMateria*  Ice::clone() const
{
    return new Ice(*this);
}

void    Ice::use(ICharacter& target)
{
    std::cout << "Cure: ""* heals " << target.getName()  << "'s wounds *""\n";
    return;
}

