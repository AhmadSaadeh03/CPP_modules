#include "Fixed.hpp"

const int Fixed::static_num = 8;

Fixed :: Fixed()
{
    _num = 0;
    std::cout <<"Default constructor called" << std::endl;    
};
Fixed :: Fixed(const Fixed &other)
{
     this->_num = other._num;
     std::cout <<"Copy constructor called" << std::endl;
};
Fixed :: Fixed(const int num)
{
    std :: cout << "Int constructor called" << std :: endl;
    _num = num << static_num;
};
Fixed :: Fixed(const float num)
{
        std :: cout << "Float constructor called" << std :: endl;
        _num = roundf( num * (1 << static_num));//pow(2, n)
};
Fixed& Fixed :: operator=(const Fixed &other)
{
        std::cout <<"Copy assignment operator called" << std::endl;    
        if (this != &other) {
          this->_num = other._num;
        }
        return (*this);
};
float Fixed :: toFloat( void )const
{
    return (float) _num / ((1 << static_num)) ;
}
int Fixed :: toInt( void ) const
{
    return _num >> static_num;
}
Fixed:: ~Fixed(){
     std::cout <<"Destructor called" << std::endl;    
};
std::ostream&  operator<<(std::ostream& os, const Fixed& fixed)// <<a
{
    os << fixed.toFloat();
    return os;
}
bool  Fixed ::  operator>(const Fixed &other) const
{
   
    if (this->_num > other._num)
        return true;
    return false;
}
bool  Fixed ::  operator<(const Fixed &other)const
{
        if (this->_num < other._num)
            return true;
    return false;
}
bool Fixed ::  operator>=(const Fixed &other) const
{
        if (this->_num >= other._num)
            return true;
    return false;
}
bool Fixed ::  operator<=(const Fixed &other) const
{
        if (this->_num <= other._num)
            return true;
    return false;
}
bool Fixed ::  operator==(const Fixed &other) const
{
        if (this->_num == other._num)
            return true;
    return false;
}
bool Fixed ::  operator!=(const Fixed &other) const
{
        if (this->_num != other._num)
            return true;
    return false;
}
Fixed Fixed ::  operator+(const Fixed &other)const
{
    Fixed result;
    result._num = this->_num + other._num; //( A * scale ) + ( B * scale ) = ( (A + B) * scale )
    const Fixed obj = result;
    return obj;
}
Fixed Fixed ::  operator-(const Fixed &other)const 
{
     Fixed result;
    result._num = this->_num - other._num;
    const Fixed obj = result;
    return obj;
}
Fixed Fixed ::  operator*(const Fixed &other) const
{
    Fixed result;
    result._num = this->_num * other.toFloat();
    const Fixed obj = result;
    return obj;
}
Fixed Fixed ::  operator/(const Fixed &other) const
{
    Fixed result;
    result._num = this->_num / other.toFloat();
    const Fixed obj = result;
    return obj;
}
Fixed& Fixed :: operator++()
{
    this->_num++;
    return *this;
}
Fixed Fixed :: operator++(int)
{
    Fixed temp = *this;
    this->_num+=1;       
    return temp;  
}
Fixed& Fixed :: operator--()
{
    this->_num-=1;
    return *this;
}
Fixed Fixed :: operator--(int)
{
    Fixed temp = *this;
    this->_num-=1;       
    return temp;  
}
Fixed &Fixed:: min(Fixed &a,Fixed  &b)// i dont need to create an object to call it and it doesnt belong to spicific obj
{
    if (a > b)
        return b;
    else
        return a;
}
const Fixed &Fixed:: min(const Fixed &a,const Fixed  &b)
{
    if (a > b)
        return b;
    else
        return a;
}
Fixed &Fixed:: max(Fixed &a,Fixed  &b)// i dont need to create an object to call it and it doesnt belong to spicific obj
{
    if (a > b)
        return a;
    else
        return b;
}
const Fixed &Fixed:: max(const Fixed &a,const Fixed  &b)
{
    if (a > b)
        return a;
    else
        return b;
}
int Fixed :: getRawBits( void ) const //cannot define any member function inside the body , every this.() is constant so i cant change it
{
    std :: cout << "getRawBits member function called" << std :: endl;
    return this->_num;
};
void Fixed ::  setRawBits( int const raw )
{
    this->_num = raw;
}