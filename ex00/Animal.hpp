#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
    public:
        Animal(void);
        Animal(std::string t);
        Animal(const Animal& other);
        Animal &operator=(const Animal &other);
        virtual ~Animal();
        std::string getType() const;
        void        makeSound() const;
    protected:
        std::string type;
};

#endif

