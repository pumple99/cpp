# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 15:20:31 by seunghoy          #+#    #+#              #
#    Updated: 2024/01/22 16:10:52 by seunghoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := cpp03_01
CXX := c++
CXXFLAGS := -Werror -Wall -Wextra -std=c++98
DEBUG_FLAGS := -g

CHANGABLE_HEADERS = ClapTrap.hpp ScavTrap.hpp

SRCS := main.cpp ClapTrap.cpp ScavTrap.cpp

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
