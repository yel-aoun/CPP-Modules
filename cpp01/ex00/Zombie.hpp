/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:50:24 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/14 11:38:10 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
		std::string name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif