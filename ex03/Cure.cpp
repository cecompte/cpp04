#include "Cure.hpp"

// Default constructor
Cure::Cure(void) : AMateria("cure")
{
    std::cout << "Cure default constructor called\n";
    return ;
}

// Copy constructor
Cure::Cure(const Cure &other) : AMateria(other)
{
    std::cout << "Cure copy consructor called\n";
    return ;
}

// Assignment operator overload
Cure &Cure::operator=(const Cure &other)
{
    std::cout << "Cure assignment operator called\n";
    if (this != &other)
        AMateria::operator=(other); 
    return (*this);
}

// Destructor
Cure::~Cure(void)
{
    std::cout << "Cure destructor called\n";
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
