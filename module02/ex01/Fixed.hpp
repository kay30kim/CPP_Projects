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
    Fixed(const int val);
    Fixed(const float val);
    Fixed(const Fixed &rightHandSide);
    Fixed& operator=(const Fixed &rhs);
    ~Fixed();

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif