# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 15:20:31 by seunghoy          #+#    #+#              #
#    Updated: 2023/07/28 20:08:19 by seunghoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := cpp02_02
CXX := c++
CXXFLAGS := -Werror -Wall -Wextra -std=c++98
DEBUG_FLAGS := #-g

CHANGABLE_HEADERS = Fixed.hpp

SRCS := main.cpp Fixed.cpp

OBJS := $(SRCS:%.cpp=%.o)

$(NAME) : $(OBJS) $(CHANGABLE_HEADERS)
	$(CXX) $(CXXFLAGS) -I. $(OBJS) $(DEBUG_FLAGS) -o $(NAME)

all : $(NAME)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -I. -c $< $(DEBUG_FLAGS) -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re :
	make fclean
	make all

.PHONY : clean fclean re all
