/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:08:12 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/17 15:03:07 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	Phone_Book contact;
	std::string input;
	int size = 0;
    contact.init_phone_book();
	std::getline(std::cin, input);
	while (input != "EXIT")
	{
		if (input == "ADD")
        {
			contact.add_contact();
            size++;
        }
		else if (input == "SEARCH")
        	contact.search_contact(size);
		std::cout<< "You can only ADD or SEARCH or EXIT your Contact Phone_Book: ";
		std::getline(std::cin, input);
	}
}