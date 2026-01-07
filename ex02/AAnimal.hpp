#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>
# include <string>

class AAnimal
{
    public:
        AAnimal(void);
        AAnimal(std::string t);
        AAnimal(const AAnimal& other);
        AAnimal &operator=(const AAnimal &other);
        virtual ~AAnimal();
        std::string     getType() const;
        virtual void    makeSound() const = 0;
    protected:
        std::string     type;
};

#endif

