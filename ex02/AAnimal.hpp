#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>
# include <string>

class AAnimal
{
    protected:
        AAnimal(void);
        AAnimal(std::string t);
        AAnimal(const AAnimal& other);
        AAnimal &operator=(const AAnimal &other);
        std::string     type;
    public:
        virtual ~AAnimal();
        std::string     getType() const;
        virtual void    makeSound() const = 0;
};

#endif

