/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:44:09 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/17 15:07:43 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Phone_Book::init_phone_book()
{
	std::cout<< "You can only ADD or SEARCH or EXIT your Contact Phone_Book: ";
	this->index = 0;
}

void	Phone_Book::add_contact()
{
	std::string input;
	std::cout<<"your first name :";
	std::getline(std::cin, input);
	while (input.empty())
	{
		std::cout<<"EMPTY STRING !!, you must give your first name :";
		std::getline(std::cin, input);
	}
	this->contacts[(this->index) % 8].add_first_name(input);
	std::cout<<"your last name :";
	std::getline(std::cin, input);
	while (input.empty())
	{
		std::cout<<"EMPTY STRING !!, you must give your last name :";
		std::getline(std::cin, input);
	}
	this->contacts[(this->index) % 8].add_last_name(input);
	std::cout<<"your nick name :";
	std::getline(std::cin, input);
	while (input.empty())
	{
		std::cout<<"EMPTY STRING !!, you must give your nick name :";
		std::getline(std::cin, input);
	}
	this->contacts[(this->index) % 8].add_nick_name(input);
	std::cout<<"your phone number :";
	std::getline(std::cin, input);
	while (input.empty())
	{
		std::cout<<"EMPTY STRING !!, you must give your phone number :";
		std::getline(std::cin, input);
	}
	this->contacts[(this->index) % 8].add_phone_number(input);
	std::cout<<"your darkest secret :";
	std::getline(std::cin, input);
	while (input.empty())
	{
		std::cout<<"EMPTY STRING !!, you must give a secret :";
		std::getline(std::cin, input);
	}
	this->contacts[(this->index) % 8].add_darkest_secret(input);
	this->index++;
}

void	Phone_Book::print_contact(std::string put)
{
	int j = put.length();
	if(j > 10)
		std::cout<<" | "<< std::setw(10)<<put.substr(0, 9) + '.';
	else
		std::cout<<" | "<<std::setw(10)<<put;
}

void	Phone_Book::print_info(int index)
{
	std::cout<<"First Name : ";
	std::cout<<this->contacts[index].get_first_name()<<std::endl;
	std::cout<<"Last Name : ";
	std::cout<<this->contacts[index].get_last_name()<<std::endl;
	std::cout<<"Nick Name : ";
	std::cout<<this->contacts[index].get_nick_name()<<std::endl;
	std::cout<<"Phone Number : ";
	std::cout<<this->contacts[index].get_phone_number()<<std::endl;
	std::cout<<"Darkest Secret : ";
	std::cout<<this->contacts[index].get_darkest_secret()<<std::endl;
}

void	Phone_Book::show_contact(int index)
{
	print_contact(this->contacts[index].get_first_name());
	print_contact(this->contacts[index].get_last_name());
	print_contact(this->contacts[index].get_nick_name());
}

int	num(std::string str)
{
	int i = 0;
	if (str.empty())
		return (0);
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}

void	Phone_Book::search_contact(int	size)
{
	if (size > 8)
		size = 8;
	if (size == 0)
		std::cout<< "Your Contact Phone_Book are empty()"<<std::endl;
	else
	{
		std::cout<<std::setw(10)<<"Index"<< " | " <<std::setw(10)<<"First Name" << " | " <<std::setw(10)<<"Last Name" << " | " <<std::setw(10)<<"Nick Name"<<std::endl;
		int i = 0;
		std::string input;
		int k;
		while (i < size)
		{
			std::cout<<std::setw(10)<< (i);
			this->show_contact(i);
			std::cout<<std::endl;
			i++;
		}
		std::cout<<"Put Tndex To Show Your Contact Info: ";
		std::getline(std::cin, input);

		while(1)
		{
			if (num(input))
			{
				k = std::stoi(input);
				if (k >= size)
					std::cout<< "index out of rang"<< std::endl;
				else
				{
					this->print_info(k);
					break ;
				}
			}
			else
				std::cout<<"Index must be a positive number"<<std::endl;
			std::cout<<"Put Index To Show Your Contact Info: ";
			std::getline(std::cin, input);
		}
	}
}
