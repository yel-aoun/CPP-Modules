/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:56:40 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/20 12:40:20 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void    Harl::complain(std::string  level)
{
    std::string levels [] = {
        "debug",
        "info",
        "warning",
        "error"
    };

    void    (Harl::*complain[])(void) = {
        &Harl::debug, 
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    int i = 0;
    while (i < 4)
    {
        void(Harl::*func) (void)= complain[i];
        if (levels[i] == level)
            (this->*func)();
        i++;
    }
}

void    Harl::debug(void)
{
    std::cout<<"I love having extra bacon for my ";
    std::cout<<"7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"<<std::endl;
}

void    Harl::info(void)
{
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put ";
    std::cout<<"enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void    Harl::warning(void)
{
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for ";
    std::cout<<"years whereas you started working here since last month."<<std::endl;
}

void    Harl::error(void)
{
    std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::cout;
}
