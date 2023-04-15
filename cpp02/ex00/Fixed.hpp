/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:00:29 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/26 18:50:20 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPPU
#define FIXED_HPPU

# include <iostream>

class Fixed
{
    private:
        int fixed_point;
        static const int number;
    public:
        Fixed (void);
        Fixed (const Fixed & other);
        Fixed & operator=(const Fixed & other);
        ~Fixed (void);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif