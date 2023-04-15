/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 22:13:42 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/01/05 19:55:14 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

int main ()
{
    int arr1[] = { 1, 2, 3, 4, 5 };

    std::cout << "arr1: " << std::endl;
    iter(arr1, 5, put);

    double arr2[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

    std::cout << "arr2: " << std::endl;
    iter(arr2, 5, put);

    char arr3[] = { 'a', 'b', 'c', 'd', 'e' };

    std::cout << "arr3: " << std::endl;
    iter(arr3, 5, put);

    std::string arr4[] = { "one", "two", "three", "four", "five" };

    std::cout << "arr4: " << std::endl;
    iter(arr4, 5, put);
    return (0);
}