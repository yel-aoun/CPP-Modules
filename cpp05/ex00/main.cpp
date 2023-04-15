/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:06:09 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/12/19 12:08:16 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main ()
{
    try {
        Bureaucrat bureaucrat("yssf", 1);

        std::cout << bureaucrat << std::endl;

        bureaucrat.increment();
        // bureaucrat.decrement();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}