/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:12:11 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/01/07 17:12:29 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"
int main()
{

    std::list<int> list;
    list.push_back(1);
    list.push_back(4);
    
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(4);
    
    easyfind( vec, 4);
    easyfind( list, 2 );

    return EXIT_SUCCESS;
}