/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:39:54 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/01 12:59:46 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int fixed_point;
        static const int bits = 8;
    public:
        Fixed (void);
        Fixed (const Fixed & other);
        Fixed & operator=(const Fixed & other);
        ~Fixed (void);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed(const int number);
        Fixed(const float number);
        float toFloat( void ) const;
        int toInt( void ) const;
        
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

        Fixed&  operator++(void); //pre_increment
        Fixed   operator++(int); //post_incriment
        Fixed&  operator--(void); //pre_decriment
        Fixed   operator--(int); //post_decriment

        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);


#endif