/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:26:55 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/08 16:41:43 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap YSSF("Joseph");

	YSSF.attack("youssef");
	YSSF.takeDamage(6);
	YSSF.beRepaired(4);
	YSSF.takeDamage(3);
	YSSF.beRepaired(8);
	YSSF.takeDamage(17);
}