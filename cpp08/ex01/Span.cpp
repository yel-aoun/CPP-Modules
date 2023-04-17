/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 17:05:34 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/01/08 18:27:20 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span(void)
{
}

Span::Span(unsigned int number) : N(number)
{
}

Span::~Span()
{
}

Span::Span(const Span & other)
{
    *this = other;
    return ;
}

Span &Span::operator=(const Span & other)
{
    if (this != &other)
    {
        this->N = other.N;
        this->vec = other.vec;
    }
    return (*this);
}

void    Span::addNumber(int number)
{
    if (this->vec.size() >= N)
        throw outOfRange();
    this->vec.push_back(number);
}

void    Span::addNumber(std::vector<int> fill)
{
    if (this->vec.size() >= N)
        throw outOfRange();
    else if (fill.size() > N)
        throw fillOutOfRange();
    vec.insert(vec.begin(), fill.begin(), fill.end());
}

int Span::shortestSpan()
{
    if (this->vec.size() < 2)
        throw noSpanCanBeFound();
    std::vector <int> tmp = this->vec;
    std::sort(tmp.begin(), tmp.end());
    int nb = tmp[1] - tmp[0];
    for(unsigned int i = 0; i < tmp.size() ; i++)
    {
        if (tmp[i + 1] == *tmp.end())
            break ;
       else if ((tmp[i + 1] - tmp[i]) < nb)
                nb = (tmp[i + 1] - tmp[i]);
    }
    return (nb);
}

int Span::longestSpan()
{
    if (this->vec.size() <= 1)
        throw noSpanCanBeFound();
    return (*std::max_element(vec.begin(), vec.end()) - *std::min_element(vec.begin(), vec.end()));
}

const char* Span::outOfRange::what() const throw()
{
    return ("victor is full");
}

const char* Span::fillOutOfRange::what() const throw()
{
    return ("victor size out of range");
}

const char* Span::noSpanCanBeFound::what() const throw()
{
    return ("No span can be found");
}