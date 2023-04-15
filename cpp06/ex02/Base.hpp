/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:12:43 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/01/02 17:53:14 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base
{
    public :
        virtual ~Base(){};
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif