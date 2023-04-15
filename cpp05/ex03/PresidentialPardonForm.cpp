/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:50:05 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/22 14:37:21 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string file) : Form("PresidentialPardonForm", 25, 5), filename(file)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other): Form(other), filename(other.filename)
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & other)
{
    (void)other;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    if (this->getSigned() == false)
        throw NotSignedException();
    else if (executor.getGrade() > this->getExecute())
        throw GradeTooLowException ();
    std::cout<< filename <<" has been pardoned by Zaphod Beeblebrox"<<std::endl;
}