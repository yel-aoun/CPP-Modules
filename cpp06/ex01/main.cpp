/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 21:14:33 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/01/02 17:00:40 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serialization.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast <uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast <Data*>(raw));
}

int main ()
{
    Data *data = new Data;
    data->fav_num = 10;
    data->msg = "yssf";
    // std::cout << serialize(data)<<std::endl;
    // std::cout << serialize(data)<<std::endl;
    std::cout << deserialize(serialize(data))->msg<<std::endl;
    std::cout << deserialize(serialize(data))->fav_num<<std::endl;
}