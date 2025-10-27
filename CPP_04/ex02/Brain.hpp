#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>
class Brain 
{
    private :
            std :: string ideas[100];
       public:
          Brain();
          Brain(const Brain &other);
          ~Brain();
          Brain& operator=(const Brain &other);
          void SetIdeas(int index , std :: string idea);
          std :: string GetIdeas(int index) const;
          void PrintIdeas();
};
#endif