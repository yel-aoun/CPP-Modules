/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 23:56:53 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/04/17 15:46:59 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <cstdlib>
#include <vector>
#include <deque>
#include <sys/time.h>

class Pmerge
{
    private:
        std::vector<unsigned int>    vec;
        std::deque<unsigned int>     que;
        void    check_for_arguments_is_positive_numbers(char **args, int ac);
        int     isPositiveNumber(std::string arg);
        void    if_args_already_sorted();
        void    mergeInsertionSort_vec(std::vector<unsigned int> &container, int ac);
        void    mergeInsertionSort_que(std::deque<unsigned int> &container, int ac);
    public:
        Pmerge();
        ~Pmerge();
        Pmerge(char **args, int ac);
};

#endif