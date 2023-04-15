/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:47:22 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/13 15:28:21 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout<<"Dog Default constructor called" << std::endl;
    brain = new Brain();
}

Dog::~Dog()
{
    delete brain;
    std::cout<<"Dog destructor called"<< std::endl;
}

Dog::Dog (const Dog & other)
{
    *this = other;
    std::cout<< "Dog copy constructor called" << std::endl;
    return ;
}

Dog & Dog::operator=(const Dog & other)
{
    this->type = other.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout<<"Woof!"<<std::endl;
}
