/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:07:27 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/20 10:39:54 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string n_ame, int g_rade) : Name(n_ame), grade(g_rade)
{
    if (this->grade > 150)
        throw GradeTooLowException();
    else if (this->grade < 1)
        throw GradeTooHighException();
        
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat & other) : Name(other.Name)
{
    *this = other;
    return ;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & other)
{
    if (this != &other)
        this->grade = other.grade;
    return (*this);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

std::string Bureaucrat::getName() const
{
    return (Name);
}

void    Bureaucrat::increment()
{
    grade -= 1;
    if (this->grade < 1)
        throw GradeTooHighException();
}
void    Bureaucrat::decrement()
{
    grade += 1;
    if (this->grade > 150)
        throw GradeTooLowException();
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too hight");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

std::ostream	&operator<<(std::ostream &str, Bureaucrat const &rhs)
{
    str<<rhs.getName() << ", Bureaucrat grade " << rhs.getGrade();
    return (str);
}

void    Bureaucrat::signForm(Form & obj)
{
    try
    {
        obj.beSigned(*this);
        std::cout<<this->Name<<" signed "<< obj.getName()<<std::endl;
    }
        
    catch (std::exception & e)
    {
        std::cout<<this->Name<<" couldn’t sign "<< obj.getName()<<" because "<< e.what()<<std::endl;
    }
}