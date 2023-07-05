/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:53:20 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/05 16:04:42 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string stringVAR = "HI THIS IS BRAIN";
	std::string *stringPTR = &stringVAR;
	std::string& stringREF = stringVAR;

	std::cout << "memory address of the stringVAR: " << \
	&stringVAR << std::endl;
	std::cout << "memory address held by stringPTR: " << \
	stringPTR << std::endl;
	std::cout << "memory address held by stringREF: " << \
	&stringREF << std::endl;

	std::cout << "The value of the stringVAR: " << \
	stringVAR << std::endl;
	std::cout << "The value pointed to by stringPTR: " << \
	*stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << \
	stringREF << std::endl;

	stringVAR = "THIS IS NEW SENTENCE";

	std::cout << "The value of the stringVAR: " << \
	stringVAR << std::endl;
	std::cout << "The value pointed to by stringPTR: " << \
	*stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << \
	stringREF << std::endl;
}