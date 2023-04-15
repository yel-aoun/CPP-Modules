/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:50:15 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/21 20:48:32 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ROBOTOMYREQUESTFORM_CPP
# define ROBOTOMYREQUESTFORM_CPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private :
        const std::string filename;
        RobotomyRequestForm();
    public :
        RobotomyRequestForm(std::string file);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm & other);
        RobotomyRequestForm & operator=(const RobotomyRequestForm & other);
        void    execute(Bureaucrat const & executor);
};

#endif