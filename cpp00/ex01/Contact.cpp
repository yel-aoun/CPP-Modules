/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:30:50 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/04 15:29:05 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

void	Contact::add_first_name(std::string input)
{
	this->first_name = input;
}

void	Contact::add_last_name(std::string input)
{
	this->last_name = input;
}
void	Contact::add_nick_name(std::string input)
{
	this->nick_name = input;
}
void	Contact::add_phone_number(std::string input)
{
	this->phone_number = input;
}
void	Contact::add_darkest_secret(std::string input)
{
	this->darkest_secret = input;
}

std::string	Contact::get_first_name()
{
	return (this->first_name);
}

std::string	Contact::get_last_name()
{
	return (this->last_name);
}

std::string	Contact::get_nick_name()
{
	return (this->nick_name);
}

std::string	Contact::get_phone_number()
{
	return (this->phone_number);
}

std::string	Contact::get_darkest_secret()
{
	return (this->darkest_secret);
}
