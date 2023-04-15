/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 17:05:31 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/01/10 11:11:14 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main ()
{
    Span span(3);
    try
    {
        // std::vector <int> v(100);
        // std::srand(time(0));
        // std::generate(v.begin(), v.end(),std::rand);
        // span.addNumber(v);
        span.addNumber(1);
        span.addNumber(16);
        span.addNumber(30);
        // span.addNumber(3);
        int i = span.longestSpan();
        std::cout<<" longest span : "<< i <<std::endl;
        int j = span.shortestSpan();
        std::cout<<" shortest span : "<< j <<std::endl;
        int k = span.shortestSpan();
        std::cout<<" shortest span : "<< k <<std::endl;
    }
    catch (std::exception &e)
    {
        std::cout<< e.what()<<std::endl;
    }
    return (0);
}
