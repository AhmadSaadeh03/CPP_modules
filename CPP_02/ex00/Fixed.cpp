#include "Fixed.hpp"

const int Fixed::static_num = 8;

Fixed :: Fixed() : _num(0)
{
    std :: cout << "Default Constructor Called" << std :: endl;
};
Fixed :: Fixed(const Fixed &other) : _num(other._num)
{
     std::cout <<"Copy Constructor Called" << std::endl;    
};
Fixed &Fixed :: operator=(const Fixed &other)
{
        if (this != &other) {
          this->_num = other._num;
        }
        std::cout <<"Copy assignment operator called" << std::endl;    
        return (*this);
};
Fixed:: ~Fixed(){
     std::cout <<"Destructor Called" << std::endl;    
};
int Fixed :: getRawBits( void ) const //cannot define any member function inside the body , every this.() is constant so i cant change it
{
    std :: cout << "getRawBits member function called" << std :: endl;
    return this->_num;
};
void Fixed ::  setRawBits( int const raw )
{
    this->_num = raw;
}