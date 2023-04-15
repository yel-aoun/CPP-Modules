/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:52:41 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/10 19:50:55 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->Name = "";
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string str)
{
    this->Name = str;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
    std::cout<<"FragTrap Parameterized Constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & other )
{
    this->Name = other.Name;
    this->Hit_points = other.Hit_points;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;
    return (*this);
}

FragTrap::FragTrap(const FragTrap & other)
{
    *this = other;
    std::cout<< "FragTrap copy constructor called" << std::endl;
    return ;
}

void FragTrap::highFivesGuys(void)
{
    std::cout<<"FragTrap "<< this->Name << " says high fives"<<std::endl;
}