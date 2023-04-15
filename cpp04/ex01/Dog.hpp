/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:47:25 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/13 14:15:23 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private :
        Brain *brain;
    public :
        Dog();
        ~Dog();
        Dog (const Dog & other);
        Dog & operator=(const Dog & other);
        void makeSound() const;

};

#endif