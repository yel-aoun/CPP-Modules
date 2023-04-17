/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:07:27 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/18 15:36:51 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    
    this->type = type;
}

const   std::string& Weapon::getType(void) const
{
    return (this->type);
}

void    Weapon::setType(const std::string& t_ype)
{
    this->type = t_ype;
}
