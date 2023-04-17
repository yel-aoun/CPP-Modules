/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:03:05 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/15 19:36:06 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Losers.hpp"

void    ft_replace(std::string &line, std::string s1, std::string s2)
{
    size_t length = line.find(s1);
    if (length == std::string::npos)
        return ;
    line.erase(length, s1.length());
    ft_replace(line, s1, s2);
    line.insert(length, s2);
}

Sed::Sed(std::string file, std::string s1, std::string s2)
{
    this->fileName = file;
    this->s1 = s1;
    this->s2 = s2;
    this->replace_file = file + ".replace";
}

void    Sed::Read_and_write_to_file(void)
{
    std::ifstream file;
    file.open(this->fileName);
    if (file.is_open())
    {
        std::ofstream replace;
        replace.open(this->replace_file);
        if (replace.is_open())
        {
            std::string line;
            while(getline(file, line))
            {
                ft_replace(line, this->s1, this->s2);
                replace<<line<<std::endl;
            }
            replace.close();
        }
        else
            std::cout<<"can't open file to write"<<std::endl;
        file.close();
    }
    else
        std::cout<<"can't open file to read"<<std::endl;
}
