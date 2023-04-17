/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:04:00 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/13 18:01:15 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): name(name), weapon_a(weapon)
{
}

void    HumanA::attack(void)
{
    std::cout<<this->name<< " : attacks with their "<< this->weapon_a.getType()<<std::endl;
}
