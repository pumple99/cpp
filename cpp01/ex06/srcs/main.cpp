/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:36:08 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/05 21:44:20 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../Harl.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (std::cout << "Error: need one argument" << std::endl, 1);
	
	int	harlValue = 4;
	std::string harls[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (size_t i = 0; i < 4; i++)
	{
		if (harls[i] == std::string(argv[1]))
			harlValue = i;
	}
	
	Harl harl;

	switch (harlValue)
	{
	case 0:
		harl.complain("DEBUG");
		
	case 1:
		harl.complain("INFO");

	case 2:
		harl.complain("WARNING");

	case 3:
		harl.complain("ERROR");
		break ;
	
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" \
		<< std::endl;
		break;
	}
}