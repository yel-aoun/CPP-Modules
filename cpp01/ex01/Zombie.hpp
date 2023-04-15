/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:23:44 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/12 16:44:52 by yel-aoun         ###   ########.fr       */
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
		Zombie(void);
		~Zombie(void);
        void	setName(std::string nam_e);
		std::string getName(void);
		void	announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif