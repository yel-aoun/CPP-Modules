/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:51:39 by yel_aoun          #+#    #+#             */
/*   Updated: 2022/12/10 19:57:24 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int	main( void )
{
	{
		FragTrap yel_aoun("yel_aoun");

		yel_aoun.attack("Handsome Jack");
		yel_aoun.takeDamage(6);
		yel_aoun.beRepaired(4);
		yel_aoun.takeDamage(3);
		yel_aoun.highFivesGuys();
		yel_aoun.beRepaired(8);
		yel_aoun.takeDamage(17);
	}
	{
		ScavTrap YSSF("Joseph");

		YSSF.attack("youssef");
		YSSF.takeDamage(6);
		YSSF.beRepaired(4);
		YSSF.takeDamage(3);
		YSSF.guardGate();
		YSSF.beRepaired(8);
		YSSF.takeDamage(17);
	}
	{
		ClapTrap YSSF("YSSF");

		YSSF.attack("Handsome Jack");
		YSSF.takeDamage(6);
		YSSF.beRepaired(4);
		YSSF.takeDamage(3);
		YSSF.beRepaired(8);
		YSSF.takeDamage(17);
	}
}
