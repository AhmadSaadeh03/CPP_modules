#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed
{
    private : 
                int fixed_num;
                const static int static_num;//init to 8 in file.cpp
    public : 
            Fixed();
            Fixed(const Fixed &other);
            Fixed &operator=(const Fixed &other);
            ~Fixed();
            int getRawBits( void ) const;
            void setRawBits( int const raw );
};
#endif