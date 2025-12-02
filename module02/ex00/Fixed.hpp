#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed 
{
private:
    int                 fixedPointVal;
    static const int    fractionalBits = 8;
public:
    Fixed();
    Fixed(const Fixed &rightHandSide);
    Fixed& operator=(const Fixed &rhs);
    ~Fixed();

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

#endif