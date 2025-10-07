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
            bool  operator>(const Fixed &other) const;
            bool  operator<(const Fixed &other) const;
            bool operator>=(const Fixed &other)const;
            bool operator<=(const Fixed &other)const;
            bool operator==(const Fixed &other)const;
            bool operator!=(const Fixed &other)const;
            Fixed operator+(const Fixed &other)const ;
            Fixed operator-(const Fixed &other)const ;
            Fixed operator*(const Fixed &other)const ;
            Fixed operator/(const Fixed &other)const ;
            Fixed& operator++(); 
            Fixed operator++(int);
            Fixed& operator--();
            Fixed operator--(int);
            static Fixed& min(Fixed &a,Fixed &b);
            const static  Fixed& min(const Fixed &a,const Fixed &b);
            static Fixed& max(Fixed &a,Fixed &b);
            const static  Fixed& max(const Fixed &a,const Fixed &b);
            int getRawBits( void ) const;
            void setRawBits( int const raw );

};

std::ostream&  operator<<(std::ostream& os, const Fixed& fixed);
#endif