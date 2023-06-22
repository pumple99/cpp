/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:33:30 by seunghoy          #+#    #+#             */
/*   Updated: 2023/06/22 23:52:28 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	command;
	while (true)
	{
		std::cout << "Input the command(ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			return (0);
		if (command == "")
			std::cout << "hi";
		std::cin.clear();
	}
}