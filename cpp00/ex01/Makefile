# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 15:20:31 by seunghoy          #+#    #+#              #
#    Updated: 2023/06/22 17:56:48 by seunghoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := phoneBook
CC := c++
CFLAGS := -Werror -Wall -Wextra -std=c++98
DEBUG_FLAGS := #-g
SRCS_DIR := srcs
OBJS_DIR := objs

CHANGABLE_HEADERS = Contact.hpp PhoneBook.hpp

SRCS := $(addprefix $(SRCS_DIR)/, main.cpp Contact.cpp PhoneBook.cpp)

OBJS := $(SRCS:$(SRCS_DIR)/%.cpp=$(OBJS_DIR)/%.o)

$(NAME) : $(OBJS) $(CHANGABLE_HEADERS)
	$(CC) $(CFLAGS) -I. $(OBJS) $(DEBUG_FLAGS) -o $(NAME)

all : $(NAME)

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.cpp
	$(CC) $(CFLAGS) -I. -c $< $(DEBUG_FLAGS) -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re :
	make fclean
	make all

.PHONY : clean fclean re
