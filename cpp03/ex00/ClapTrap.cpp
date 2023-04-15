/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:26:48 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/08 16:46:31 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->Name = "NONE";
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    std::cout<<"ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string str)
{
    this->Name = str;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    std::cout<<"ClapTrap Parameterized Constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout<<"ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap & other)
{
    *this = other;
    std::cout<< "ClapTrap copy constructor called" << std::endl;
    return ;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & other)
{
    this->Name = other.Name;
    this->Hit_points = other.Hit_points;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (Energy_points <= 0)
    {
        std::cout<< "ClapTrap"<< this->Name << "is out of energy"<<std::endl;
        return;
    }
    std::cout<<"ClapTrap "<< this->Name<<" attacks "<<target<<", causing "<<this->Attack_damage<<" points of damage!"<<std::endl;
    Energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points <= amount)
    {
        std::cout<< "ClapTrap "<< this->Name<<" is Dead"<<std::endl;
        return ;
    }
    std::cout<< "ClapTrap "<<this->Name<<" take " << amount << " of damage !"<<std::endl;
    Hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy_points <= 0)
    {
        std::cout<< "ClapTrap "<< this->Name<<" is out of energy point !"<<std::endl;
        return ;
    }
    std::cout<< "ClapTrap "<< this->Name << " repair it self for " << amount<< " hit point"<<std::endl;
    Hit_points += amount;
    Energy_points -= 1;
}