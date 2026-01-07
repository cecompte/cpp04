#include "Cat.hpp"

// Default constructor
Cat::Cat(void) : Animal("Cat"), catBrain(new Brain())
{
    std::cout << "Cat default constructor called\n";
    return ;
}
// Constructor with idea
Cat::Cat(std::string idea) : Animal("Cat"), catBrain(new Brain(idea))
{
    std::cout << "Cat constructor called with idea\n";
    return ;
}

// Copy constructor
Cat::Cat(const Cat &other) : Animal(other), catBrain(new Brain(*other.catBrain)) 
{
    std::cout << "Cat copy constructor called\n";
    return ;
}

// Assignment operator overload
Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator called\n";
    if (this != &other)
    {
        Animal::operator=(other); 
        *catBrain = *other.catBrain;
    }
    return (*this);
}

// Destructor
Cat::~Cat(void)
{
    std::cout << "Cat destructor called\n";
    delete catBrain;
    return ;
}

void    Cat::makeSound() const
{
    std::cout << "miaou\n";
    return;
}

std::string    Cat::getIdeas() const
{
    return(catBrain->getIdeas());
}

void    Cat::setIdeas(std::string idea)
{
    catBrain->setIdeas(idea);
    return;
}
