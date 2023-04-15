/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:39:51 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/01 13:02:55 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

# include "Fixed.hpp"

Fixed::Fixed (void)
{
    std::cout<< "Default constructor called"<<std::endl;
    this->fixed_point = 0;
}

Fixed::Fixed (const Fixed & other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed & Fixed::operator=(const Fixed & other)
{
    std::cout<< "Copy assignment operator called" <<std::endl;
    if (this != &other)
        this->fixed_point = other.fixed_point;
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout<< "Destructor called"<<std::endl;
}

int Fixed::getRawBits(void) const
{
    return (this->fixed_point);
}

void    Fixed::setRawBits( int const raw )
{
    this->fixed_point = raw;
}

Fixed::Fixed(const int number)
{
    this->fixed_point = (number << bits);
    std::cout<< "Int constructor called"<<std::endl;
}

Fixed::Fixed(const float number): fixed_point(std::roundf(number * (1 << bits)))
{
    std::cout<< "Float constructor called"<<std::endl;
}

float   Fixed::toFloat( void ) const
{
    return (float)this->fixed_point / (float)(1 << bits);
}

int Fixed::toInt( void ) const
{
    return (this->fixed_point >> bits);
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
    return (str << fixed_nbr.toFloat());
}

bool    Fixed::operator>( const Fixed &rhs ) const 
{
    return (this->getRawBits() > rhs.getRawBits());
}

bool    Fixed::operator<( const Fixed &rhs ) const 
{
    return (this->getRawBits() < rhs.getRawBits());
}

bool    Fixed::operator>=( const Fixed &rhs ) const 
{
    return (this->getRawBits() >= rhs.getRawBits());
}

bool    Fixed::operator<=( const Fixed &rhs ) const 
{
    return (this->getRawBits() <= rhs.getRawBits());
}

bool    Fixed::operator==( const Fixed &rhs ) const 
{
    return (this->getRawBits() == rhs.getRawBits());
}

bool    Fixed::operator!=( const Fixed &rhs ) const 
{
    return (this->getRawBits() != rhs.getRawBits());
}

Fixed   Fixed::operator+(const Fixed &rhs ) const 
{
    return (this->toFloat() + rhs.toFloat());
}

Fixed   Fixed::operator-(const Fixed &rhs ) const 
{
    return (this->toFloat() - rhs.toFloat());
}

Fixed   Fixed::operator*(const Fixed &rhs ) const 
{
    return (this->toFloat() * rhs.toFloat());
}

Fixed   Fixed::operator/(const Fixed &rhs ) const 
{
    return (this->toFloat() / rhs.toFloat());
}

Fixed&  Fixed::operator++(void)
{
    ++this->fixed_point;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp(*this);
    tmp.fixed_point = this->fixed_point++;
    return (tmp);
}

Fixed&  Fixed::operator--(void)
{
    --this->fixed_point;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp(*this);
    tmp.fixed_point = this->fixed_point--;
    return (tmp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}