#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
#include <string>
class Fixed
{
    private : 
                int _num;
                const static int static_num;//init to 8 in file.cpp
    public : 
            Fixed();
            Fixed(const int num);
            Fixed(const Fixed &other);
            Fixed(const float num) ;
            Fixed &operator=(const Fixed &other);
            ~Fixed();
            int getRawBits( void ) const;
            void setRawBits( int const raw );
            float toFloat( void )const;
            int toInt( void ) const;
};
std::ostream&  operator<<(std::ostream& os, const Fixed& fixed);
#endif