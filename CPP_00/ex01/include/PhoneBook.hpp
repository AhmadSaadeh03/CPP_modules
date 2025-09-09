
#ifndef PHONEBOOK_HPP

#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "contact.hpp"
#include <cstdlib>
#include <iomanip>
class PhoneBook
{
    private:
           Contact contact[8];
           int index ;
           int get_index();
           void get_full_info(std :: string str,int num);
    public:
            void add_contact(int index);
            void search_contact();
            void set_index(int num);
};
#endif
