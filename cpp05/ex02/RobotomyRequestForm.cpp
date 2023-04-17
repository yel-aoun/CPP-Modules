/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:50:13 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/22 14:50:09 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string file) : Form("RobotomyRequestForm", 72, 45), filename(file)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other): Form(other), filename(other.filename)
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & other)
{
    (void)other;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
    if (this->getSigned() == false)
        throw NotSignedException();
    else if (executor.getGrade() > this->getExecute())
        throw GradeTooLowException ();
    static int x;
    if (x % 2 == 1)
        std::cout << "BZZZZZT! " << filename << " has been robotomized!" << std::endl;
    else
        std::cout << "Robotomy failed! " << filename << " is still alive." << std::endl;
    x++;
}