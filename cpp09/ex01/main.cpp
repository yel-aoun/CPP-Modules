/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 23:51:38 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/04/15 23:51:39 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"
int main(int ac, char **av)
{
    if (ac == 2)
        RPN rpn(av[1]);
    else
    {
        std::cout<<"incorrect number of arguments "<<std::endl;
        exit(1);
    }
    return (0);
}