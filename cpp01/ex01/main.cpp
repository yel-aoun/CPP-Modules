/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:23:27 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/20 12:50:17 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void    announce_zombies(int k, Zombie *arr)
{
    for (int i = 0; i < k; i++)
        arr[i].announce();
}

int main ()
{
    Zombie *zombies = zombieHorde( 3, "yssf");
    announce_zombies( 3, zombies);
    delete [] zombies;
    return (0);
}