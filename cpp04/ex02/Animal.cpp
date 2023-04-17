/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:44:44 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/13 14:22:48 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
    this->type = "";
    std::cout<<"Animal Default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout<<"Animal destructor called"<< std::endl;
}

Animal::Animal (const Animal & other)
{
    *this = other;
    std::cout<< "Animal copy constructor called" << std::endl;
    return ;
}

Animal & Animal::operator=(const Animal & other)
{
    this->type = other.type;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout<< "Animal sound's"<<std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}
