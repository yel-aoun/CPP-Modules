/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:34:45 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/18 13:55:11 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout<< this->name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout<<"No MORE BraiiiiiiinnnzzzZ The Zombie "<< this->name << " IS DEAD !!!"<< std::endl;
}

Zombie* newZombie( std::string name )
{
	Zombie *newZombie = new Zombie(name);
	return (newZombie);
}

void randomChump( std::string name )
{
	Zombie zombie_0(name);
    zombie_0.announce();
}