#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
    public:
        Brain(void);
        Brain(const Brain& other);
        Brain(std::string ideas);
        Brain &operator=(const Brain &other);
        ~Brain();
        void    setIdeas(std::string idea);
        std::string getIdeas() const;
    private:
        std::string ideas[100];
};

#endif

