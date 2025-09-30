#include "Fixed.hpp"

const int Fixed::static_num = 8;

Fixed :: Fixed() : _num(0)
{
    std::cout <<"Default constructor called" << std::endl;    
};

Fixed :: Fixed(const int num) : _num(0)
{
    std :: cout << "Int constructor called" << std :: endl;
    _num = num << static_num;
};
Fixed :: Fixed(const float num) : _num(0)
{
        std :: cout << "Float constructor called" << std :: endl;
        _num = roundf( num * (1 << static_num));//pow(2, n)
};

Fixed :: Fixed(const Fixed &other) : _num(other._num)
{
     std::cout <<"Copy constructor called" << std::endl;    
};

Fixed &Fixed :: operator=(const Fixed &other)
{
        std::cout <<"Copy assignment operator called" << std::endl;    
        if (this != &other) {
          this->_num = other._num;
        }
        return (*this);
};

std::ostream&  operator<<(std::ostream& os, const Fixed& fixed)// <<a
{
    os << fixed.toFloat();
    return os;
}

Fixed:: ~Fixed(){
     std::cout <<"Destructor called" << std::endl;    
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
float Fixed :: toFloat( void )const
{
    return (float)_num / (1 << static_num);
}
int Fixed :: toInt( void ) const
{
    return _num >> static_num;
}
