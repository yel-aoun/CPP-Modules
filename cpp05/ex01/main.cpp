/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:06:09 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/23 13:16:17 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main ()
{
    try {
        Bureaucrat bureaucrat("yssf",11);
        Form form("Draft", 10);

        bureaucrat.signForm(form);
        // form.beSigned(bureaucrat);

        std::cout << form << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}