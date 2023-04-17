/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:33:00 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/09 14:46:41 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
# include "ClapTrap.hpp"

int	main( void )
{
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
	// {
	// 	ClapTrap YSSF("YSSF");

	// 	YSSF.attack("Handsome Jack");
	// 	YSSF.takeDamage(6);
	// 	YSSF.beRepaired(4);
	// 	YSSF.takeDamage(3);
	// 	YSSF.beRepaired(8);
	// 	YSSF.takeDamage(17);
	// }
}
