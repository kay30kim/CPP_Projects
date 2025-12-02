#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedPointVal = 0;
}

Fixed::Fixed(const int val)
{
    fixedPointVal = val;
    std::cout << "Default constructor called" << std::endl;
    this->fixedPointVal = val << fractionalBits;
}

Fixed::Fixed(const float val)
{
    fixedPointVal = val;
    std::cout << "Default constructor called" << std::endl;
    this->fixedPointVal = static_cast<int>(std::roundf(val * (1 << fractionalBits)));;
}

Fixed::Fixed(const Fixed &rightHandSide)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(rightHandSide.getRawBits());
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->fixedPointVal = rhs.fixedPointVal;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPointVal;
}

void Fixed::setRawBits(int const raw)
{
    this->fixedPointVal = raw;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(getRawBits())/ ( 1 << fractionalBits );
}

int     Fixed::toInt( void ) const {
    return this->fixedPointVal >> fractionalBits;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat();
    return o;
}