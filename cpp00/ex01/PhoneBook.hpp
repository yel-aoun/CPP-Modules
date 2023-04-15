/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:44:37 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/04 16:06:10 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class Phone_Book
{
	private:
		Contact contacts[8];
		int		index;
	public:
		void	init_phone_book();
		void	add_contact();
		void	search_contact(int	size);
		void	show_contact(int index);
		void	print_contact(std::string put);
		void	print_info(int index);
};

#endif 