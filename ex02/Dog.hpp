#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    public:
        Dog(void);
        Dog(const Dog& other);
        Dog(std::string idea);
        Dog &operator=(const Dog &other);
        ~Dog();
        void            makeSound() const;
        std::string     getIdeas() const;
        void            setIdeas(std::string idea);
    private:
        Brain*          dogBrain;
};

#endif

