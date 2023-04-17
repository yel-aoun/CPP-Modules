/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 23:56:50 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/04/17 21:39:02 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

Pmerge::Pmerge(){}
Pmerge::~Pmerge(){}
Pmerge::Pmerge(char **args, int ac)
{
    check_for_arguments_is_positive_numbers(args, ac);
}

void    Pmerge::check_for_arguments_is_positive_numbers(char **args, int ac)
{
    (void)args;
    int i = 1;
    while (args[i])
    {
        if (isPositiveNumber(args[i]))
        {
            std::cout<<"Error ! in ' "<<args[i]<<" ' , you must insert a positive number "<<std::endl;
            exit(1);
        }
        i++;
    }
    if_args_already_sorted();
    if (ac > 10)
    {
        std::cout<<"Befor: ";
        for(int j = 1; j < 10; j++)
            std::cout<<args[j]<<" ";
        std::cout<<"[...]"<<std::endl;
    }
    else
    {
        std::cout<<"Befor: ";
        for(int j = 1; j < i; j++)
            std::cout<<args[j]<<" ";
        std::cout<<std::endl;
    }
    mergeInsertionSort_vec(this->vec, ac);
    mergeInsertionSort_que(this->que, ac);
    if (ac > 10)
    {
        std::cout<<"after: ";
        for(int j = 0; j < 10; j++)
            std::cout<<vec[j]<<" ";
        std::cout<<"[...]"<<std::endl;
    }
    else
    {
        std::cout<<"after: ";
        for(int j = 0; j < i - 1; j++)
            std::cout<<vec[j]<<" ";
        std::cout<<std::endl;
    }
}

int Pmerge::isPositiveNumber(std::string arg)
{
    int i = 0;
    unsigned int num;
    if (arg[i] == '+')
        i++;
    while (arg[i])
    {
        if (!isdigit(arg[i]))
            return 1;
        i++;
    }
    long long input_num = std::atoll(arg.c_str());
    if (input_num > std::numeric_limits<unsigned int>::max())
    {
        std::cout << "Error: Input value is too large for an unsigned int" << std::endl;
        return 1;
    }
    else
        num = static_cast<unsigned int>(input_num);
    this->vec.push_back(num);
    this->que.push_back(num);
    return 0;
}

void    Pmerge::if_args_already_sorted()
{
    for (std::vector<unsigned int>::iterator iter = vec.begin() + 1; iter != vec.end(); ++iter)
    {
        if (*iter < *(iter - 1))
            return ;
    }
    std::cout<<"the argument's are already sorted"<<std::endl;
    exit(0);
}

void    Pmerge::mergeInsertionSort_vec(std::vector<unsigned int> &container, int ac)
{
    std::vector<unsigned int> cont_1;
    std::vector<unsigned int> cont_2;
    std::vector<std::pair<unsigned int, unsigned int> > cont_pair;
    struct timeval start_t, end_t;
    gettimeofday(&start_t, NULL);
    for(size_t i = 0; i < container.size() - 1; i += 2)
        cont_pair.push_back(std::make_pair(container[i], container[i + 1]));
    for(size_t i = 0; i < cont_pair.size(); i++)
    {
        if (cont_pair[i].first > cont_pair[i].second)
            std::swap(cont_pair[i].first, cont_pair[i].second);
    }
    for(size_t i = 0; i < cont_pair.size(); i++)
        cont_1.push_back(cont_pair[i].first);
    for(size_t i = 0; i < cont_pair.size(); i++)
        cont_2.push_back(cont_pair[i].second);

    std::sort(cont_1.begin(), cont_1.end());

    size_t i = 0;
    for(; i < cont_2.size(); i++)
        cont_1.insert(std::lower_bound(cont_1.begin(), cont_1.end(), cont_2[i]), cont_2[i]);
    if (container.size() % 2 == 1)
        cont_1.insert(std::lower_bound(cont_1.begin(), cont_1.end(), container.back()), container.back());
    container = cont_1;
    gettimeofday(&end_t, NULL);
    long seconds = end_t.tv_sec - start_t.tv_sec;
    long microseconds = end_t.tv_usec - start_t.tv_usec;
    long t_m = (seconds * 1000000) + microseconds;
    std::cout<<"Time to process a range of "<< (ac - 1) <<" elements with std::vector : "<< t_m <<" us "<<std::endl;
}

void    Pmerge::mergeInsertionSort_que(std::deque<unsigned int> &container, int ac)
{
    std::deque<unsigned int> cont_1;
    std::deque<unsigned int> cont_2;
    std::deque<std::pair<unsigned int, unsigned int> > cont_pair;
    struct timeval start_t, end_t;
    gettimeofday(&start_t, NULL);
    for(size_t i = 0; i < container.size() - 1; i += 2)
        cont_pair.push_back(std::make_pair(container[i], container[i + 1]));
    for(size_t i = 0; i < cont_pair.size(); i++)
    {
        if (cont_pair[i].first > cont_pair[i].second)
            std::swap(cont_pair[i].first, cont_pair[i].second);
    }
    for(size_t i = 0; i < cont_pair.size(); i++)
        cont_1.push_back(cont_pair[i].first);
    for(size_t i = 0; i < cont_pair.size(); i++)
        cont_2.push_back(cont_pair[i].second);

    std::sort(cont_1.begin(), cont_1.end());

    size_t i = 0;
    for(; i < cont_2.size(); i++)
        cont_1.insert(std::lower_bound(cont_1.begin(), cont_1.end(), cont_2[i]), cont_2[i]);
    if (container.size() % 2 == 1)
        cont_1.insert(std::lower_bound(cont_1.begin(), cont_1.end(), container.back()), container.back());
    container = cont_1;
    gettimeofday(&end_t, NULL);
    long seconds = end_t.tv_sec - start_t.tv_sec;
    long microseconds = end_t.tv_usec - start_t.tv_usec;
    long t_m = (seconds * 1000000) + microseconds;
    std::cout<<"Time to process a range of "<< ac - 1 <<" elements with std::deque : "<< t_m <<" us "<<std::endl;
}