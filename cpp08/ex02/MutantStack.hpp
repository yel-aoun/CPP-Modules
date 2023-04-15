/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:49:23 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/01/09 15:35:13 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <stack>

template <typename T>
class MutantStack :public std::stack<T>
{
    public :
        MutantStack(void){}
        ~MutantStack(void){}
        MutantStack(const MutantStack &rhs){
            *this = rhs;
        }
        MutantStack &operator=(const MutantStack &rhs){
            *this = rhs;
            return *this;
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin(){return this->c.begin();}
        iterator end(){return this->c.end();}
};

#endif