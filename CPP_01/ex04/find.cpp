#include "sedforlosers.hpp"

int find_occ(std :: string &file ,std :: string &s1_copy, std :: string &s2copy)
{
    int pos = 0;
    while (pos >= 0)
    {
        pos = file.find(s1_copy);
        if (pos < 0)
             return 0;
         file.erase(pos,s1_copy.size()); // pos and how many char to erase 
         file = file.insert(pos,s2copy); // pos and the string that i want to insert;

    };
    return 1;
}