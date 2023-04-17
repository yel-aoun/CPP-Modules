/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:47:18 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/13 11:32:55 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout<<"Cat Default constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout<<"Cat destructor called"<< std::endl;
}

Cat::Cat (const Cat & other)
{
    *this = other;
    std::cout<< "Cat copy constructor called" << std::endl;
    return ;
}

Cat & Cat::operator=(const Cat & other)
{
    this->type = other.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout<<"Meow!"<<std::endl;
}
