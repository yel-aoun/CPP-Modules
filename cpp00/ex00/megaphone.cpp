/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:31:01 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/02 16:13:26 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(int ac, char **av)
{
    int i;

    i = 1;
    if (ac > 1)
    {
        while(av[i])
        {
            for(int j = 0; av[i][j]; j++)
                std::cout<< (char)toupper(av[i][j]);
            i++;
        }
        std::cout<< std::endl;
    }
    else
        std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
    return (0);
    
}