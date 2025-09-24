#include <iostream>

int main ()
{
    
    std :: string str = "HI THIS IS BRAIN";
    std :: string *stringPTR = &str;
    std :: string &stringREF = str;
    
    std :: cout << "address of string:    " <<&str << std :: endl ;
    std :: cout << "address of pointer:   " << stringPTR << std :: endl ;
    std :: cout << "address of reference: " <<&stringREF << std :: endl ;
    std :: cout << "-------------------------------------------------\n";
    std :: cout <<"value of string:     " << str << std :: endl ;
    std :: cout <<"value of pointer:    " << *stringPTR << std :: endl ;
    std :: cout <<"value of reference : " << stringREF << std :: endl ;
}