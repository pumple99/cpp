/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:48:34 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/25 10:10:11 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other): type(other.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal&	Animal::operator = (const Animal& other)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

std::string	Animal::getType() const { return this->type; }

void	Animal::makeSound() const
{
	std::cout << "Some animal sound" << std::endl;
}
