/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 22:13:44 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/01/05 19:54:45 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void    iter(T *arr, size_t size, void (*func)(T &))
{
    for(size_t i = 0; i < size; i++)
        func(arr[i]);
}

template<typename T>
void    put(T &arg)
{
    std::cout<< arg <<std::endl;
}


#endif