# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 15:20:31 by seunghoy          #+#    #+#              #
#    Updated: 2023/06/21 16:40:49 by seunghoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone
CC := c++
CFLAGS := -Werror -Wall -Wextra -std=c++98
DEBUG_FLAGS := #-g

SRCS := megaphone.cpp

$(NAME) :
	$(CC) $(CFLAGS) -I. $(SRCS) $(DEBUG_FLAGS) -o $(NAME)

all : $(NAME)

fclean :
	rm -rf $(NAME)

re :
	make fclean
	make all

.PHONY : fclean re
