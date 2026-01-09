#include "Character.hpp"

// Default constructor
Character::Character(void) : ICharacter()
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    floor = NULL;
    floorSize = 0;
    std::cout << "Character default constructor called\n";
    return ;
}

// Parametized constructor
Character::Character(std::string const name)
{
    _name = name;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    floor = NULL;
    floorSize = 0;
    std::cout << "Character " << _name << " constructor called\n";
    return ;
}

// Copy constructor
Character::Character(const Character &other)
{
    std::cout << "Character copy consructor called\n";

    _name = other._name;

    floorSize = other.floorSize;
    if (floorSize > 0)
    {
        floor = new AMateria*[floorSize];
        for (int i = 0; i < floorSize; i++)
            floor[i] = other.floor[i]->clone();
    }
    else
        floor = NULL;

    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
    return ;
}

// Assignment operator overload
Character &Character::operator=(const Character &other)
{
    std::cout << "Character assignment operator called\n";
    if (this != &other)
    {
        ICharacter::operator=(other);
    }
    return (*this);
}

// Destructor
Character::~Character(void)
{
    std::cout << "Character destructor called\n";
    for (int i = 0; i < 4; i++)
		delete inventory[i];
    for (int i = 0; i < floorSize; i++)
		delete floor[i];
    delete[] floor;
    return ;
}

//Member functions
std::string const& Character::getName() const
{
    return (_name);
}

void    Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m->clone();
            return;
        }
    }
}

void    Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || inventory[idx] == NULL)
        return;

    int newSize = floorSize + 1;
    AMateria**   newFloor = new AMateria*[newSize];

    for (int i = 0; i < floorSize; i++)
        newFloor[i] = floor[i];
    delete[] floor;
    floor = newFloor;
    floorSize = newSize;
    floor[floorSize - 1] = inventory[idx];
    inventory[idx] = NULL;
}