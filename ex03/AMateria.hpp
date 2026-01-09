#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>

class ICharacter;

class AMateria
{
    protected:
        std::string const   type;
    public:
        AMateria(void);
        AMateria(std::string const t);
        AMateria(const AMateria& other);
        AMateria &operator=(const AMateria &other);
        virtual ~AMateria();
        std::string const & getType() const; //Returns the materia type
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
};

#endif

