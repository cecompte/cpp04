#include "AMateria.hpp"
#include "ICharacter.hpp"

// Default constructor
AMateria::AMateria(void)
{
    return ;
}

AMateria::AMateria(std::string const t) : type(t)
{
    return ;
}

// Copy constructor
AMateria::AMateria(const AMateria &other)
{
    (void) other;
    return ;
}

// Assignment operator overload
AMateria &AMateria::operator=(const AMateria &other)
{
    (void) other;
    return (*this);
}

// Destructor
AMateria::~AMateria(void)
{
    return ;
}

std::string const & AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria used on " << target.getName() << std::endl;
}
