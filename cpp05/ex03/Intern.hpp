/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:45:19 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/23 11:46:39 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern
{
    public :
        Intern();
        ~Intern();
        Intern(const Intern & other);
        Intern & operator=(const Intern & other);
        Form *makeForm(std::string Name, std::string Target);
        class errorException : public std::exception
        {
            public :
                const char * what() const throw();
        };
};

#endif