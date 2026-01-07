#include "Dog.hpp"

// Default constructor
Dog::Dog(void) : Animal("Dog"), dogBrain(new Brain())
{
    std::cout << "Dog default constructor called\n";
    return ;
}
// Constructor with idea
Dog::Dog(std::string idea) : Animal("Dog"), dogBrain(new Brain(idea))
{
    std::cout << "Dog constructor called with idea\n";
    return ;
}

// Copy constructor
Dog::Dog(const Dog &other) : Animal(other), dogBrain(new Brain(*other.dogBrain))
{
    std::cout << "Dog copy constructor called\n";
    return ;
}

// Assignment operator overload
Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator called\n";
    if (this != &other)
    {
        Animal::operator=(other);
        *dogBrain = *other.dogBrain;
    }
    return (*this);
}

// Destructor
Dog::~Dog(void)
{
    std::cout << "Dog destructor called\n";
    delete dogBrain;
    return ;
}

void    Dog::makeSound() const
{
    std::cout << "wouf\n";
    return;
}

std::string    Dog::getIdeas() const
{
    return(dogBrain->getIdeas());
}

void    Dog::setIdeas(std::string idea)
{
    dogBrain->setIdeas(idea);
    return;
}

