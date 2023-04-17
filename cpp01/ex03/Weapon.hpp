/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:00:59 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/18 15:37:34 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>

class Weapon
{
    public:
        Weapon(std::string type);
        const std::string&  getType(void) const;
        void    setType(const std::string& t_ype);
    private:
        std::string type;
};

#endif
