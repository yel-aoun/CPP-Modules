/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:30:53 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/06 11:54:43 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

Fixed::Fixed(const float number): fixed_point(roundf(number * (1 << bits)))
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
