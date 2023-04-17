/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:15:53 by yel-aoun          #+#    #+#             */
/*   Updated: 2023/01/05 18:53:42 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
    private :
        T* arr;
        unsigned int _size;
    public :
        Array() : arr(new T), _size(0){};
        Array(unsigned int n) : arr(new T[n]()), _size(n) {};
        
        Array(const Array & rhs){
            _size = rhs._size;
            arr = new T[rhs.size()];
            for(unsigned int i = 0; i < rhs.size(); i++)
                arr[i] = rhs.arr[i];
        };
        Array &operator=(const Array &rhs){
            if (this != &rhs)
            {
                delete [] arr;
                arr = new T[rhs.size()];
                _size = rhs._size;
                for(unsigned int i = 0; i < _size; i++)
                    arr[i] = rhs.arr[i];
            }
            return (*this);
        };

        T &operator[](unsigned int n) const {
            if ( n >= _size)
                throw BoundsException();
            return (arr[n]);
        }

        unsigned int  size( void ) const { return _size; }
        ~Array() { delete[] arr;};

        class BoundsException : public std::exception
        {
            public :
                const char* what() const throw () {return ("index out of BOUNDS");};
        };

};

#endif