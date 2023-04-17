/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:13:18 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/21 15:25:14 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form(): Name(""), grade_required(0), grade_execute(0)
{
}

Form::Form(std::string n_ame, int required, int execute) : Name(n_ame), status(0), grade_required(required), grade_execute(execute)
{
    if (grade_required < 1 || grade_execute < 1)
        throw Form::GradeTooHighException();
    else if(grade_required > 150 || grade_execute > 150)
        throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form::Form(const Form & other) : Name(other.getName()), grade_required(other.getRequired()), grade_execute(other.getExecute())
{
}

Form & Form::operator=(const Form & other)
{
    if (this != &other)
        this->status = other.status;
    return (*this);
}

std::string Form::getName() const
{
    return (this->Name);
}

int Form::getRequired() const
{
    return (this->grade_required);
}

int Form::getExecute() const
{
    return (this->grade_execute);
}

bool Form::getSigned()
{
    return (status);
}

void Form::beSigned(const Bureaucrat & obj)
{
    if (obj.getGrade() > grade_required)
        throw GradeTooLowException();
    status = true;
}

const char * Form::GradeTooHighException::what() const throw()
{
    return ("Grade too hight");
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

const char * Form::NotSignedException::what() const throw()
{
    return ("Form not signed");
}

std::ostream	&operator<<(std::ostream &str, Form const &rhs)
{
    str << "------------- Form Info -------------" << std::endl;
    str << "Form name: " << rhs.getName() << std::endl
      << "Grade to sign: " << rhs.getRequired() << std::endl
      << "Grade to execute: " << rhs.getExecute();
    return (str);
}