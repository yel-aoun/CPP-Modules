/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:59:11 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/14 16:15:31 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
#define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        void    attack(void);
        // Weapon* getWeapon(void);
        void    setWeapon(Weapon &weapon);
    private:
        std::string name;
        Weapon *weapon_b;
};

#endif
