/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:50:22 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/21 18:30:13 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SHRUBBERYCREATIOFORM_HPP
# define SHRUBBERYCREATIOFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
    private :
        const std::string filename;
        ShrubberyCreationForm();
    public :
        ShrubberyCreationForm(std::string file);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm & other);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm & other);
        void    execute(Bureaucrat const & executor);
};

#endif