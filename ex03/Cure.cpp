#include "Cure.hpp"

// Default constructor
Cure::Cure(void) : AMateria("cure")
{
    return ;
}

// Copy constructor
Cure::Cure(const Cure &other) : AMateria(other)
{
    return ;
}

// Assignment operator overload
Cure &Cure::operator=(const Cure &other)
{
    if (this != &other)
        AMateria::operator=(other); 
    return (*this);
}

// Destructor
Cure::~Cure(void)
{
    return ;
}
// Member functions
AMateria*  Cure::clone() const
{

    return (new Cure(*this));
}

void    Cure::use(ICharacter& target)
{
    std::cout << "Ice: ""* shoots an ice bolt at " << target.getName()  << " *""\n";
    return;
}
