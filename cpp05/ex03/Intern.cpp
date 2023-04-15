/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:45:15 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/23 11:49:39 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern & other)
{
    *this = other;
}

Intern & Intern::operator=(const Intern & other)
{
    (void)other;
    return (*this);
}

const char * Intern::errorException::what() const throw()
{
    return ("Name not found");
}

Form * Intern::makeForm(std::string Name, std::string Target)
{
    std::string formName[] = { 
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
        };
    Form* Form[] = {
        new ShrubberyCreationForm(Target),
        new RobotomyRequestForm(Target),
        new PresidentialPardonForm(Target)
    };
    for(int i = 0; i < 3; i++)
    {
        if (formName[i] == Name)
        {
            std::cout << "Intern creates " << Name << std::endl;
            return (Form[i]);
        }
    }
    std::cout << "Intern cannot create " << Name << " form" << std::endl;
    throw errorException();
    return (nullptr);
}
