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
            Fixed &operator=(const Fixed &other);
            Fixed(const int num);
            Fixed(const Fixed &other);
            Fixed(const float num) ;
            float toFloat( void )const;
            int toInt( void ) const;
            ~Fixed();
            bool operator>(const Fixed &other);
            bool operator<(const Fixed &other);
            bool operator>=(const Fixed &other);
            bool operator<=(const Fixed &other);
            bool operator==(const Fixed &other);
            bool operator!=(const Fixed &other);
            Fixed operator+(const Fixed &other);
            Fixed operator-(const Fixed &other);
            Fixed operator*(const Fixed &other)const ;
            Fixed operator/(const Fixed &other);
            Fixed& operator++(); 
            Fixed operator++(int);
            static float min(Fixed &a,Fixed &b);
            static float min(const Fixed &a,const Fixed &b);
            static float max(Fixed &a,Fixed &b);
            static float max(const Fixed &a,const Fixed &b);

};

std::ostream&  operator<<(std::ostream& os, const Fixed& fixed);
#endif