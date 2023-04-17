/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:15:23 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/14 16:15:26 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon_b(nullptr)
{
}

void    HumanB::attack()
{
    if (this->weapon_b)
        std::cout<<this->name<< " : attacks with their "<< this->weapon_b->getType()<<std::endl;
    else
        std::cout<<this->name<< "Can't attack he doesn't have a weapon"<<std::endl;
}

// Weapon* HumanB::getWeapon(void)
// {
//     return (this->weapon_b);
// }

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon_b = &weapon;
}
