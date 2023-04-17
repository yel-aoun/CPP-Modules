/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Losers.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:28:59 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/11/15 17:30:22 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LOSERS_HPP
#define LOSERS_HPP

# include <iostream>
# include <fstream>
# include <string>


class Sed
{
    public:
        Sed(std::string file, std::string s1, std::string s2);
        void    Read_and_write_to_file(void);
    private:
        std::string fileName;
        std::string s1;
        std::string s2;
        std::string replace_file;
};

void    ft_replace(std::string &line, std::string s1, std::string s2);

#endif
