/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 23:56:47 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/04/17 14:56:13 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"PmergeMe.hpp"

int main (int ac, char **av)
{
    if (ac > 2)
        Pmerge Pmerge(av, ac);
    else
        std::cout<<"you must insert mor than one number"<<std::endl;
    return(0);
}