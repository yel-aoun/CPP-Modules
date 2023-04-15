/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:56:04 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/01/05 19:38:04 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void    swap(T &a, T &b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T   min(T &a, T &b)
{
    if (a == b)
        return(b);
    else if (a < b)
        return (a);
    else
        return (b);
}

template <typename T>
T   max(T &a, T &b)
{
    if (a == b)
        return(b);
    else if (a > b)
        return (a);
    else
        return (b);
}

#endif