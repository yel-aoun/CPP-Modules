/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:32:51 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/12 16:47:03 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "";
}

Zombie::~Zombie(void)
{
	std::cout<<"No MORE BraiiiiiiinnnzzzZ The Zombie "<< this->name << " IS DEAD !!!"<< std::endl;
}


void	Zombie::setName(std::string nam_e)
{
	this->name = nam_e;
}

std::string	Zombie::getName(void)
{
	return (this->name);
}

void	Zombie::announce(void)
{
	std::cout<< this->name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}
