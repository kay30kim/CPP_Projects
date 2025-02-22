#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;

public:
    Fixed( void );
    Fixed( const int n );
    Fixed( const float n );
    Fixed( const Fixed &rhs );
    Fixed& operator=( const Fixed &rhs );
    ~Fixed();

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

    /*
        to convert a floating point to a fixed point we multiply the float number
        with the base raised to the power of n (n the size of the fractional part)
        to do the opposite we devide
    */
    float   toFloat( void ) const;
    int     toInt( void ) const;

    bool    operator>( const Fixed &rhs ) const ;
    bool    operator<( const Fixed &rhs ) const ;
    bool    operator>=( const Fixed &rhs ) const ;
    bool    operator<=( const Fixed &rhs ) const ;
    bool    operator==( const Fixed &rhs ) const ;
    bool    operator!=( const Fixed &rhs ) const ;

    Fixed   operator+( const Fixed &rhs ) const ;
    Fixed   operator-( const Fixed &rhs ) const ;
    Fixed   operator*( const Fixed &rhs ) const ;
    Fixed   operator/( const Fixed &rhs ) const ;

    Fixed&  operator++( void ); // prefix
    Fixed   operator++( int ); // postfix
    Fixed&  operator--( void ); // prefix
    Fixed   operator--( int ); // postfix

    static Fixed& min( Fixed &a, Fixed &b );
    static const Fixed& min( const Fixed &a, const Fixed &b );
    static Fixed& max( Fixed &a, Fixed &b );
    static const Fixed& max( const Fixed &a, const Fixed &b );
    /*
        Static Function Members
        By declaring a function member as static, you make it independent of any
         particular object of the class. A static member function can be called 
         even if no objects of the class exist and the static functions are accessed
         using only the class name and the scope resolution operator ::.

        A static member function can only access static data member, other static
        member functions and any other functions from outside the class.

        Static member functions have a class scope and they do not have access
        to the this pointer of the class. You could use a static member function
        to determine whether some objects of the class have been created or not.
    */ 

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif  // FIXED_HPP