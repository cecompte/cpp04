#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(std::string idea);
        Cat(const Cat& other);
        Cat &operator=(const Cat &other);
        ~Cat();
        void           makeSound() const;
        std::string    getIdeas() const;
        void           setIdeas(std::string idea);
    private:
        Brain*         catBrain;

};

#endif

