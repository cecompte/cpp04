#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(std::string t);
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal &operator=(const WrongAnimal &other);
        virtual ~WrongAnimal();
        std::string     getType() const;
        void    makeSound() const;
    protected:
        std::string     type;
};

#endif

