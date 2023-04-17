/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:47:30 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/13 11:47:36 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "";
    std::cout<<"WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"WrongAnimal destructor called"<< std::endl;
}

WrongAnimal::WrongAnimal (const WrongAnimal & other)
{
    *this = other;
    std::cout<< "WrongAnimal copy constructor called" << std::endl;
    return ;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & other)
{
    this->type = other.type;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout<< "WrongAnimal sound's"<<std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}