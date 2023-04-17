/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:19:16 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/04/16 16:50:57 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  BITCOINEXCHANGE_HPP
#define  BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <cstdlib>
#include <ctype.h>

class Bitcoin
{
    private :
        std::string data_file;
        std::map<std::string, float> data;
        void    ft_stor_data(std::string line);
        void    ft_get_result(std::string   line);
        int     check_line(std::string line);
        void    ft_bad_input(std::string &error);
        int     ft_signe(float num);
        int     ft_check_date(std::string &token);
        int     ft_check_pip(std::string &token);
        int     ft_check_value(std::string &token);
        int     is_digit(std::string token);
        int     is_year(std::string &token);
        int     is_month(std::string &token);
        int     is_day(std::string &token, std::string &month);
        int     check_for_float(std::string token);
        void    ft_put_result(std::string key, float value);
        int     ft_check_key(std::string key);
    public :
        Bitcoin();
        ~Bitcoin();
        Bitcoin(std::string input);
    
};

#endif