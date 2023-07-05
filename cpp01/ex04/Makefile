# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 15:20:31 by seunghoy          #+#    #+#              #
#    Updated: 2023/07/05 18:11:55 by seunghoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := cpp01_04
CC := c++
CFLAGS := -Werror -Wall -Wextra -std=c++98
DEBUG_FLAGS := #-g

SRCS := main.cpp

$(NAME) : main.cpp
	$(CC) $(CFLAGS) -I. $(SRCS) $(DEBUG_FLAGS) -o $(NAME)

all : $(NAME)

fclean :
	rm -rf $(NAME)

re :
	make fclean
	make all

.PHONY : fclean re all
