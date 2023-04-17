/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:23:57 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/15 17:48:37 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Losers.hpp"

int main (int ac, char **av)
{
    if (ac != 4)
    {
        std::cout<< "Invalide number of arguments"<<std::endl;
        return (1);
    }
    else if (!std::strcmp(av[1], ""))
    {
        std::cout<<"File Name can't be empty"<<std::endl;
        return (1);
    }
    else if(!std::strcmp(av[2], ""))
    {
        std::cout<<"Must have a string to replace, can't be empty"<<std::endl;
        return (1);
    }
    else if (!std::strcmp(av[3], ""))
    {
        std::cout<<"Must have a replacement , can't be empty"<<std::endl;
        return (1);
    }
    Sed sed(av[1], av[2], av[3]);
    sed.Read_and_write_to_file();
    return (0);
}
