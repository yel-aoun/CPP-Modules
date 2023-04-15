/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:50:53 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/13 17:55:28 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
#define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon& weapon);
        void    attack(void);
    private:
        std::string name;
        Weapon  &weapon_a;
};

#endif
