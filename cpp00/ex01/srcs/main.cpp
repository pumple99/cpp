/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:33:30 by seunghoy          #+#    #+#             */
/*   Updated: 2023/06/25 20:57:16 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	command;
	while (std::cin.good())
	{
		std::cout << "Input the command(ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (!std::cin.good())
			std::cout << "Error or EOF detected at cin." << std::endl;
		else if (command == "EXIT")
			return (0);
		else if (command == "ADD")
			phoneBook.AddPhoneBook();
		else if (command == "SEARCH")
			phoneBook.SearchPhoneBook();
	}
}