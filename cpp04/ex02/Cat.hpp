/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:47:15 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/13 13:21:33 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private :
        Brain *brain;
    public :
        Cat();
        ~Cat();
        Cat (const Cat & other);
        Cat & operator=(const Cat & other);
        void makeSound() const;
};

#endif