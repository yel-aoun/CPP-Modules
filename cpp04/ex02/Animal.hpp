/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:44:41 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/15 18:36:11 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected :
        std::string type;
    public :
        Animal();
        virtual ~Animal();
        Animal (const Animal & other);
        Animal & operator=(const Animal & other);
        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif