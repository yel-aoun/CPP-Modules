/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:07:23 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/20 15:41:18 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;
class Bureaucrat
{
    private :
        const std::string Name;
        int grade;
        Bureaucrat();  
    public :
        Bureaucrat(std::string n_ame, int g_rade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat & other);
        Bureaucrat & operator=(const Bureaucrat & other);
        int getGrade() const ;
        std::string getName() const ;
        void    increment();
        void    decrement();
        void    signForm(Form & obj);
    class GradeTooHighException : public std::exception
    {
        public :
            const char* what() const throw ();
    };
    class GradeTooLowException : public std::exception
    {
        public :
            const char* what() const throw ();
    };
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

# endif