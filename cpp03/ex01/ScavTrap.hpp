/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:33:15 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/09 13:46:13 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private :
        ScavTrap();
    public :
        ScavTrap(std::string str);
        ~ScavTrap();
        ScavTrap (const ScavTrap & other);
        ScavTrap & operator=(const ScavTrap & other);
        void guardGate();
        void attack(const std::string& target);
    
};

#endif