/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 23:51:33 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/04/16 00:40:14 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>


class RPN
{
    private :
        std::stack<float> rpn_num;
        void    ReversePolishNotation(char op);
    public :
        RPN();
        ~RPN();
        RPN(std::string input);
};

#endif