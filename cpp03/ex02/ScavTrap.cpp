/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:52:04 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/09 14:52:10 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor called" <<std::endl;
};

ScavTrap::ScavTrap(std::string str)
{
    this->Name = str;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
    std::cout << "ScavTrap Parameterized Constructor called" << std::endl;
};

ScavTrap::~ScavTrap()
{
    std::cout << "Scavtrap destractor called" <<std::endl;
};

void ScavTrap::guardGate()
{
    std::cout<< "The ScavTrap " << this->Name << " is now in Gate keeper mode."<<std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (Energy_points <= 0)
    {
        std::cout<< "ScavTrap "<< this->Name << "is out of energy"<<std::endl;
        return;
    }
    std::cout<<"ScavTrap "<< this->Name<<" attacks "<<target<<", causing "<<this->Attack_damage<<" points of damage!"<<std::endl;
    Energy_points -= 1;
}

ScavTrap::ScavTrap (const ScavTrap& other)
{
    *this = other;
    std::cout<< "ScavTrap copy constructor called" << std::endl;
    return ;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & other)
{
    this->Name = other.Name;
    this->Hit_points = other.Hit_points;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;
    return (*this);
}