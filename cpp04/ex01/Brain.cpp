/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:15:35 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/13 14:32:26 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
    std::cout <<"Brain Default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout<<"Brain destructor called"<< std::endl;
}

Brain::Brain(const Brain & other)
{
    *this = other;
    std::cout<< "Brain copy constructor called" << std::endl;
    return ;
}

Brain & Brain::operator=(const Brain & other)
{
    for(int i = 0; i < 100 ; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
    return (*this);
}
