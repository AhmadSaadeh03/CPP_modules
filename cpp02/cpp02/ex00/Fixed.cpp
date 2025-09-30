#include "Fixed.hpp"

const int Fixed::static_num = 8;

Fixed :: Fixed() : fixed_num(0)
{
    std :: cout << "Default Constructor Called" << std :: endl;
};
Fixed :: Fixed(const Fixed &other) : fixed_num(other.fixed_num)
{
     std::cout <<"Copy Constructor Called" << std::endl;    
};
Fixed &Fixed :: operator=(const Fixed &other)
{
        if (this != &other) {
          this->fixed_num = other.fixed_num;
        }
        std::cout <<"Assignment Operator Called" << std::endl;    
        return (*this);
};
Fixed:: ~Fixed(){
     std::cout <<"Destructor Called" << std::endl;    
};
int Fixed :: getRawBits( void ) const //cannot define any member function inside the body , every this.() is constant so i cant change it
{
    std :: cout << "getRawBits member function called" << std :: endl;
    return this->fixed_num;
};
void Fixed ::  setRawBits( int const raw )
{
    this->fixed_num = raw;
}