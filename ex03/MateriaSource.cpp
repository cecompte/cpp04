#include "MateriaSource.hpp"

// Default constructor
MateriaSource::MateriaSource(void) : IMateriaSource()
{
    for (int i = 0; i < 4; i++)
        source[i] = NULL;
    return ;
}

// Copy constructor
MateriaSource::MateriaSource(const MateriaSource &other) : IMateriaSource(other)
{
    for (int i = 0; i < 4; i++)
    {
        if (other.source[i] != NULL)
            source[i] = other.source[i]->clone();
        else
            source[i] = NULL;
    }
    return ;
}

// Assignment operator overload
MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            delete source[i];
            if (other.source[i] != NULL)
                source[i] = other.source[i]->clone();
            else
                source[i] = NULL;
        }
    }
    return (*this);
}

// Destructor
MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        delete source[i];
    return ;
}

// Member functions

void MateriaSource::learnMateria(AMateria* m)
{
    if (m == NULL)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (source[i] == NULL)
        {
            source[i] = m->clone();
            delete m;
            return;
        }
    }
    std::cout << "No space left in materia source\n";
    delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (source[0] == NULL)
    {
        std::cout << "No materia has been learned yet.\n";
        return NULL;
    }
    for (int i = 0; source[i]; i++)
    {
        if (source[i]->getType() == type)
            return (source[i]);
    }
    std::cout << "Materia type " << type << " has not been learned yet.\n";
    return NULL;
}

