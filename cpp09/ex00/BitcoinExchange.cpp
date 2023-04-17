/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 23:51:45 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/04/16 17:49:52 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin(){}
Bitcoin::~Bitcoin(){}
Bitcoin::Bitcoin(std::string input):data_file("data.csv")
{
    std::ifstream data_file;
    data_file.open(this->data_file);
    if (!data_file.is_open())
    {
        std::cout<<"error in opening data_file"<<std::endl;
        exit(1);
    }
    else
    {
        std::string line;
        getline(data_file, line);
        while (data_file.good())
        {
            getline(data_file, line);
            ft_stor_data(line);
        }
        data_file.close();
    }
    std::ifstream input_file;
    input_file.open(input);
    if (!input_file.is_open())
    {
        std::cout<<"error in opening input_file"<<std::endl;
        exit(1);
    }
    else
    {
        std::string line;
        getline(input_file, line);
        if (check_line(line) == 3)
        {   int i = 0;
            std::stringstream ss(line);
            std::string token;
            ss >> token;
            if (token == "date")
            {
                i++;
                ss >> token;
                if (token == "|")
                {
                    i++;
                    ss >> token;
                    if (token == "value")
                        i++;
                }
            }
            if (i != 3)
                ft_get_result(line);
        }
        else
            ft_get_result(line);
        while (input_file.good())
        {
            getline(input_file, line);
            ft_get_result(line);
        }
        input_file.close();
    }
}

void    Bitcoin::ft_stor_data(std::string line)
{
    size_t pos = 0;
    if ((pos = line.find(',')) != std::string::npos)
    {
        std::string value = line.substr(pos + 1);
        this->data.insert(std::make_pair(line.substr(0, pos), std::atof(value.c_str())));
    }
}

void    Bitcoin::ft_get_result(std::string   line)
{
    int arg = check_line(line);
    if (arg == 3)
    {
        std::stringstream ss(line);
        std::string token;
        ss >> token;
        if (ft_check_date(token))
        {
            ft_bad_input(line);
            return ;
        }
        std::string key = token;
        ss >> token;
        if (ft_check_pip(token))
        {
            ft_bad_input(line);
            return ;
        }
        ss >> token;
        if (ft_check_value(token))
        {
            ft_bad_input(line);
            return ;
        }
        float num = std::atof(token.c_str());
        if (ft_signe(num))
            return ;
        if (ft_check_key(key))
            return ;
        ft_put_result(key, num);
    }
    else
        ft_bad_input(line);
}

int Bitcoin::ft_check_key(std::string key)
{
    if (this->data.begin()->first > key)
    {
        std::cout<<"Your date is older than our data Base"<<std::endl;
        return 1;
    }
    return 0;
}

int Bitcoin::check_line(std::string line)
{
    std::stringstream ss(line);
    std::string token;
    int i = 0;
    while (ss>>token)
        i++;
    return (i);
}

void    Bitcoin::ft_bad_input(std::string &error)
{
    std::cout<<"Error: bad input => "<<error<<std::endl;
}

int     Bitcoin::ft_signe(float num)
{
    if (num < 0)
    {
        std::cout<<"Error: not a positive number."<<std::endl;
        return 1;
    }
    else if(num > 1000)
    {
        std::cout<<"Error: too large a number."<<std::endl;
        return 1;
    }
    return 0;
}

int Bitcoin:: ft_check_date(std::string &token)
{
    size_t pos = 0;
    if (token.length() != 10 )
        return 1;
    if ((pos = token.find('-')) != std::string::npos)
    {
        std::string date = token.substr(0, pos);
        if (is_year(date))
            return 1;
        std::string value = &token[pos + 1];
        std::string month = value.substr(0, 2);
        if (is_month(month))
            return 1;
        if (value[2] != '-')
            return 1;
        std::string day = value.substr(3);
        if (is_day(day, month))
            return 1;
        return 0;
    }
    else
        return 1;
}

int Bitcoin::ft_check_pip(std::string &token)
{
    if (token != "|")
        return 1;
    else
        return 0;
}

int Bitcoin::ft_check_value(std::string &token)
{
    if (check_for_float(token))
            return 1;
    return 0;
}

int Bitcoin::is_year(std::string &token)
{
    if (is_digit(token))
        return 1;
    std::stringstream ss(token);
    int num;
    ss >> num;
    if (num < 2009 || num > 2022)
        return 1;
    else
        return 0;
}

int Bitcoin::is_month(std::string &token)
{
    if (is_digit(token))
        return 1;
    std::stringstream ss(token);
    int num;
    ss >> num;
    if (num < 1 || num > 12)
        return 1;
    else
        return 0;
}

int Bitcoin::is_day(std::string &token, std::string &month)
{
    if (is_digit(token))
        return 1;
    std::stringstream ss(token);
    int day;
    ss >> day;
    std::stringstream s_s(month);
    int mon;
    s_s  >> mon;
    int month_limits[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (day < 1 || day > month_limits[mon - 1])
        return 1;
    else
        return 0;
}

int Bitcoin::is_digit(std::string token)
{
    int i = 0;
    while (token[i])
    {
        if (!isdigit(token[i]))
            return 1;
        i++;
    }
    return 0;
}

int Bitcoin::check_for_float(std::string token)
{
    if (token[0] == '.')
        return 1;
    int i = 0;
    int dot = 0;
    if (token[i] == '-' || token[i] == '+')
        i++;
    while (token[i])
    {
        if (!isdigit(token[i]))
        {
            if (token[i] == '.')
                dot++;
            else
                return 1;
            if (dot > 1)
                return 1;
        }
        i++;
    }
    if (token[i - 1] == '.')
        return 1;
    return 0;
}

void    Bitcoin::ft_put_result(std::string key, float value)
{
    std::map<std::string, float>::iterator it = this->data.find(key);
    if (it != this->data.end())
        std::cout<<key<<" => "<<value<<" = "<<it->second * value<<std::endl;
    else
    {
        std::map<std::string, float>::iterator bound = this->data.upper_bound(key);
        if (bound != this->data.begin())
            bound--;
        std::cout<<key<<" => "<<value<<" = "<<bound->second * value<<std::endl;
    }
}