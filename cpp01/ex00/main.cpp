/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:25:17 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/18 13:50:48 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main ()
{
	std::cout<< "Creaing a simple zombie"<<std::endl;
	Zombie	zomb("ysf");
	zomb.announce();
	std::cout<< "Creaing a zombie using newZombie function"<<std::endl;
	Zombie *zombie_1 = newZombie("yss");
	Zombie *zombie_2 = newZombie("elaouny");
	zombie_1->announce();
	zombie_2->announce();
	delete zombie_1;
	delete zombie_2;
	std::cout<< "Creaing a zombie using randChump function"<<std::endl;
	randomChump("the leader youssef");
	return (0);
}