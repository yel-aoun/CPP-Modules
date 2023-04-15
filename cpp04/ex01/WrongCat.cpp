/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:47:25 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/13 11:47:26 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



# include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout<<"WrongCat Default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout<<"WrongCat destructor called"<< std::endl;
}

WrongCat::WrongCat (const WrongCat & other)
{
    *this = other;
    std::cout<< "WrongCat copy constructor called" << std::endl;
    return ;
}

WrongCat & WrongCat::operator=(const WrongCat & other)
{
    this->type = other.type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout<<"Meow!"<<std::endl;
}