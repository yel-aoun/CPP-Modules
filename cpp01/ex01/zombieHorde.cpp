/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:13:34 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/20 12:49:59 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	if (N <= 0)
	{
		std::cout<< "you must allocate a positive number."<<std::endl;
		exit(1);
	}
	Zombie *zombieHorde = new Zombie[N];
	for(int j = 0; j < N; j++)
		zombieHorde[j].setName(name);
	return (zombieHorde);
}