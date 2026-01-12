#include "Character.hpp"
#include "AMateria.hpp"

// Default constructor
Character::Character(void) : ICharacter()
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    floor = NULL;
    floorSize = 0;
    return ;
}

// Parametized constructor
Character::Character(std::string const name) : ICharacter()
{
    _name = name;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    floor = NULL;
    floorSize = 0;
    return ;
}

// Copy constructor
Character::Character(const Character &other) : ICharacter(other)
{
    _name = other._name;

    //copy inventory
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
    
    // copy floor
    floorSize = other.floorSize;
    if (floorSize > 0)
    {
        floor = new AMateria*[floorSize];
        for (int i = 0; i < floorSize; i++)
            floor[i] = other.floor[i]->clone();
    }
    else
        floor = NULL;
    return ;
}

// Assignment operator overload
Character &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        _name = other._name;
    
        // delete then copy inventory
        for (int i = 0; i < 4; i++)
        {
            delete inventory[i];
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
        
        // delete then copy floor
        floorSize = other.floorSize;
        if (floorSize > 0)
        {
            for (int i = 0; i < floorSize; i++)
		        delete floor[i];
            delete[] floor;
            floor = new AMateria*[floorSize];
            for (int i = 0; i < floorSize; i++)
                floor[i] = other.floor[i]->clone();
        }
        else
            floor = NULL;
    }
    return (*this);
}

// Destructor
Character::~Character(void)
{
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
    if (m == NULL)
    {
        std::cout << "Cannot equip with no materia.\n";
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m->clone();
            return;
        }
    }
    std::cout << _name <<"'s inventory is already full.\n";
}

void    Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
    {
        std::cout << "Cannot unequip. Index " << idx << " is out of bounds.\n";
        return;
    }
    if (inventory[idx] == NULL)
    {
        std::cout << "Cannot unequip. There is no materia at index " << idx << ".\n";
        return;
    }
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

void    Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4)
    {
        std::cout << "Cannot use. Index " << idx << " is out of bounds.\n";
        return;
    }
    if (inventory[idx] == NULL)
    {
        std::cout << "Cannot use. There is no materia at index " << idx << ".\n";
        return;
    }
    inventory[idx]->use(target);
}

