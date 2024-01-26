/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:38:02 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/25 13:12:23 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Brain.hpp"

Brain::Brain()
{
	for(int i=0; i < 100; i++)
		this->ideas[i] = "default thinking..";
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	for(int i=0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain&	Brain::operator = (const Brain& other)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &other)
	{
		for(int i=0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

std::string Brain::getIdea(unsigned int idx) const
{
	if (idx < 100)
		return this->ideas[idx];
	else
		return "index out of range(0~99)";
}

void	Brain::setIdea(std::string idea, unsigned int idx)
{
	if (idx < 100)
		this->ideas[idx] = idea;
}