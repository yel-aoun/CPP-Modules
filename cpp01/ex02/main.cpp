/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:49:10 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/18 14:37:59 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main ()
{
    std::string string =  "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    std::cout<<"The memory address"<<std::endl;
    std::cout<<"The memory address of the string variable : "<<&string<< std::endl;
    std::cout<<"The memory address held by stringPTR : "<<stringPTR<< std::endl;
    std::cout<<"The memory address held by stringREF : "<<&stringREF<< std::endl;
    std::cout<< "The value"<<std::endl;
    std::cout<<"The value of the string variable : "<< string<< std::endl;
    std::cout<<"The value pointed to by stringPTR : "<<*stringPTR<< std::endl;
    std::cout<<"The value pointed to by stringREF : "<<stringREF<< std::endl;
}