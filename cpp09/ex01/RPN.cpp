/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 23:51:23 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/04/17 15:40:43 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

RPN::RPN(){}
RPN::~RPN(){}
RPN::RPN(std::string input)
{
    int i = 0;
    while (input[i])
    {
        if (input[i] != ' ')
        {
            if (isdigit(input[i]))
            {
                int num = static_cast<int>(input[i] - 48);
                rpn_num.push(num);
            }
            else
            {
                if (input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != '/')
                {
                    std::cout<<"Invalid format !"<<std::endl;
                    exit(1);
                }
                else
                    ReversePolishNotation(input[i]);
            }
        }
        i++;
    }
    if (rpn_num.size() == 1)
        std::cout<<rpn_num.top()<<std::endl;
    else
    {
        std::cout<<"Invalid format !"<<std::endl;
        exit(1);
    }
}

void    RPN::ReversePolishNotation(char op)
{
    if (rpn_num.size() >= 2)
    {
        float result;
        float second = rpn_num.top();
        rpn_num.pop();
        float first = rpn_num.top();
        rpn_num.pop();
        if (op == '+')
            result = first + second;
        else if (op == '-')
            result = first - second;
        else if (op == '*')
            result = first * second;
        else if (op == '/')
        {
            if (second == 0)
            {
                std::cout<<"Error: you can't devide by 0"<<std::endl;
                exit(1);
            }
            result = first / second;
        }
        rpn_num.push(result);
    }
    else
    {
        std::cout<<"Invalid format !"<<std::endl;
        exit(1);
    }
}