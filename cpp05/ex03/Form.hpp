/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:10:08 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/22 17:25:16 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private :
        const std::string   Name;
        bool    status;
        const int grade_required;
        const int grade_execute;
        Form();
    public :
        Form(std::string n_ame, int required, int execute);
        virtual ~Form();
        Form(const Form & other);
        Form & operator=(const Form & other);
        std::string getName() const;
        int getRequired() const;
        int getExecute() const;
        void beSigned(const Bureaucrat & obj);
        bool getSigned();

        virtual void    execute(Bureaucrat const & executor) = 0;

    class GradeTooHighException : public std::exception
    {
        public :
            const char * what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public :
            const char * what() const throw();
    };
    class NotSignedException : public std::exception
    {
        public :
            const char * what() const throw();
    };
};

std::ostream	&operator<<(std::ostream &str, Form const &rhs);

#endif