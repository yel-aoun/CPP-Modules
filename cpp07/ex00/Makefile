# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/02 19:56:06 by yel-aoun          #+#    #+#              #
#    Updated: 2023/01/02 19:56:55 by yel-aoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

SRC = main.cpp

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

all :$(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
