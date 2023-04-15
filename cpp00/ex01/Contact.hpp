/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:23:30 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/04 14:14:50 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		void	add_first_name(std::string input);
		void	add_last_name(std::string input);
		void	add_nick_name(std::string input);
		void	add_phone_number(std::string input);
		void	add_darkest_secret(std::string input);
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nick_name();
		std::string	get_phone_number();
		std::string	get_darkest_secret();
};

#endif 