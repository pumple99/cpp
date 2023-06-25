/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:06:48 by seunghoy          #+#    #+#             */
/*   Updated: 2023/06/25 21:19:04 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_insertPos = 0;
	this->_contactCount = 0;
}

int	PhoneBook::OutAndIn(const std::string out, std::string& in)
{
	while (std::cin.good())
	{
		std::cout << out;
		std::getline(std::cin, in);
		if (!in.empty())
			return (0);
	}
	std::cout << "Error or EOF detected at cin." << std::endl;
	return (1);
}

void	PhoneBook::AddPhoneBook(void)
{
	std::string	contactInfo[5];

	if (OutAndIn(std::string("Input first name: "), contactInfo[0]) || \
	OutAndIn(std::string("Input last name: "), contactInfo[1]) || \
	OutAndIn(std::string("Input nick name: "), contactInfo[2]) || \
	OutAndIn(std::string("Input phone number: "), contactInfo[3]) || \
	OutAndIn(std::string("Input darkest secret: "), contactInfo[4]))
		return ;
		
	this->_contact[this->_insertPos].SetContact(contactInfo, \
	this->_insertPos + 1);

	this->_insertPos = (this->_insertPos + 1) % 8;

	if (this->_contactCount < 8)
		++this->_contactCount;
}

void	PhoneBook::SearchPhoneBook(void)
{
	std::cout << "     Index|First name| Last name| Nick name" << std::endl;
	for (int i = 0; i < this->_contactCount; ++i)
		this->_contact[i].Preview();		
	if (this->_contactCount == 0)
		return ;

	std::string	idx;
	int	index;

	while (std::cin.good())
	{
		OutAndIn("Input index to search: ", idx);
		index = idx.at(0) - '0';
		if (idx.size() == 1 && 0 < index && index <= this->_contactCount)
			break ;
		std::cout << "Wrong index, try again" << std::endl;
	}
	if (std::cin.good())
		this->_contact[index - 1].ShowAll();
}
