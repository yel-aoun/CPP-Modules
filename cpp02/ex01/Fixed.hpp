/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:31:07 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/30 15:47:43 by yel-aoun         ###   ########.fr       */
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
        float toFloat( void ) const;//
        int toInt( void ) const;//
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif