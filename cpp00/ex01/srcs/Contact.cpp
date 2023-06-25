/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:54:06 by seunghoy          #+#    #+#             */
/*   Updated: 2023/06/25 20:14:04 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

void	Contact::SetContact(const std::string str[], int index)
{
	this->_index = index;
	this->_first_name = str[0];
	this->_last_name = str[1];
	this->_nick_name = str[2];
	this->_phone_number = str[3];
	this->_darkest_secret = str[4];
}

void	Contact::TruncateAlignPrint(const std::string& str)
{
	std::string	trunStr;

	if (str.size() > 10)
		trunStr = str.substr(0, 9).append(".");
	else
		trunStr = str;
	std::cout.width(10); std::cout << trunStr;
}

void	Contact::Preview(void)
{
	std::cout.width(10); std::cout << this->_index;
	std::cout << '|';
	TruncateAlignPrint(this->_first_name);
	std::cout << '|';
	TruncateAlignPrint(this->_last_name);
	std::cout << '|';
	TruncateAlignPrint(this->_nick_name);
	std::cout << std::endl;
}

void	Contact::ShowAll(void)
{
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nick name: " << this->_nick_name << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}
