#include "MateriaSource.hpp"

// Default constructor
MateriaSource::MateriaSource(void) : IMateriaSource()
{
    for (int i = 0; i < 4; i++)
        book[i] = NULL;
    return ;
}

// Copy constructor
MateriaSource::MateriaSource(const MateriaSource &other) : IMateriaSource(other)
{
    for (int i = 0; i < 4; i++)
    {
        if (other.book[i] != NULL)
            book[i] = other.book[i]->clone();
        else
            book[i] = NULL;
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
            delete book[i];
            if (other.book[i] != NULL)
                book[i] = other.book[i]->clone();
            else
                book[i] = NULL;
        }
    }
    return (*this);
}

// Destructor
MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        delete book[i];
    return ;
}

// Member functions

void MateriaSource::learnMateria(AMateria* m)
{
    if (m == NULL)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (book[i] == NULL)
        {
            book[i] = m->clone();
            delete m;
            return;
        }
    }
    delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (book[0] == NULL)
    {
        std::cout << "No materia has been learned yet.\n";
        return NULL;
    }
    for (int i = 0; i < 4; i++)
    {
        if (book[i]->getType() == type)
            return (book[i]);
    }
    std::cout << "Materia type " << type << " has not been learned yet.\n";
    return NULL;
}

