#include "Ice.hpp"

// Default constructor
Ice::Ice(void) : AMateria("ice")
{
    return ;
}

// Copy constructor
Ice::Ice(const Ice &other) : AMateria(other)
{
    return ;
}

// Assignment operator overload
Ice &Ice::operator=(const Ice &other)
{
    if (this != &other)
        AMateria::operator=(other); 
    return (*this);
}

// Destructor
Ice::~Ice(void)
{
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

