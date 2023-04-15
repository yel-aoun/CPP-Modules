/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:36:27 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/17 11:37:21 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

void    Harl::complain(std::string level)
{
    std::string levels [] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    int x = -1;
    for(int i = 0; i < 4; i++)
    {
        if(levels[i] == level)
            x = i;
    }
    switch(x)
    {
        case 0:
            std::cout<<"[ DEBUG ]"<<std::endl;
            this->debug();
        case 1:
            std::cout<<"[ INFO ]"<<std::endl;
            this->info();
        case 2:
            std::cout<<"[ WARNING ]"<<std::endl;
            this->warning();
        case 3:
            std::cout<<"[ERROR]"<<std::endl;
            this->error();
        default:
            std::cout << "[ Probably complaining about insignificant problems ]"<<std::endl;
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
