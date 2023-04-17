/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 17:05:37 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/01/08 18:13:00 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>


class Span
{
    private :
        std::vector <int> vec;
        unsigned int N;
        Span(void);
    public :
        Span(unsigned int number);
        ~Span();
        Span(const Span & other);
        Span &operator=(const Span & other);
        void    addNumber(int number);
        void    addNumber(std::vector<int> fill);
        int shortestSpan(void);
        int longestSpan(void);
        class outOfRange : public std::exception
        {
            public :
                const char* what() const throw();
        };
        class fillOutOfRange : public std::exception
        {
            public :
                const char* what() const throw();
        };
        class noSpanCanBeFound : public std::exception
        {
            public :
                const char* what() const throw();
        };
};

#endif