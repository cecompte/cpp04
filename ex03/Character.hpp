#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>

#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character(void);
        Character(const Character& other);
        Character &operator=(const Character &other);
        virtual ~Character();
};

#endif

