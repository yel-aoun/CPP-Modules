/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:36:29 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/17 11:37:04 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
    {
        std::cout<<"Usage: ./harlFilter Complain_level"<<std::endl;
        return (0);
    }
    Harl bob;
    bob.complain(av[1]);
}