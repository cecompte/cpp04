#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(const Dog& other);
        Dog &operator=(const Dog &other);
        ~Dog();
        void    makeSound() const;
    private:
        Brain*  dogBrain;
};

#endif

