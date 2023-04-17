/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:51:35 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/09 14:51:36 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        unsigned int Hit_points;
        unsigned int Energy_points;
        unsigned int Attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string str);
        ~ClapTrap(void);
        ClapTrap (const ClapTrap & other);
        ClapTrap & operator=(const ClapTrap & other);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif