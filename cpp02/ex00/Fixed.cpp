/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:00:33 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/28 14:42:28 by yel-aoun         ###   ########.fr       */
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
    std::cout<< "getRawBits member function called"<<std::endl;
    return (this->fixed_point);
}

void    Fixed::setRawBits( int const raw )
{
    this->fixed_point = raw;
}

const int Fixed::number = 8;
