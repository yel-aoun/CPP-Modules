/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:12:45 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/01/02 18:33:03 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"

Base * generate(void)
{
    if (rand() % 3 == 0)
        return (new A);
    else if (rand() % 3 == 1)
        return (new B);
    else
        return (new C);
}

void identify(Base* p)
{
    if (dynamic_cast<A *> (p))
        std::cout<< "A"<<std::endl;
    else if (dynamic_cast<B *> (p))
        std::cout<< "B"<<std::endl;
    else if (dynamic_cast<C *> (p))
        std::cout<< "C"<<std::endl;
    else
        std::cout<< "unknown"<<std::endl;
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A &> (p);
        std::cout<<"A"<<std::endl;
        (void) a;
    }
    catch(std::exception& e){};
    try
    {
        B &b = dynamic_cast<B &> (p);
        std::cout<<"B"<<std::endl;
        (void) b;
    }
    catch(std::exception& e){};
    try
    {
        C &c = dynamic_cast<C &> (p);
        std::cout<<"C"<<std::endl;
        (void) c;
    }
    catch(std::exception& e){};
}

int main ()
{
    Base *a = generate();
    Base *b = generate();
    Base *c = generate();
    Base *d = generate();
    
    std::cout<< "(a*) and (a&)"<<std::endl;
    identify(*a);
    identify(a);
    std::cout<< "(b*) and (b&)"<<std::endl;
    identify(*b);
    identify(b);
    std::cout<< "(c*) and (c&)"<<std::endl;
    identify(*c);
    identify(c);
    std::cout<< "(d*) and (d&)"<<std::endl;
    identify(*d);
    identify(d);
    
    return (0);
}