/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:14:46 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/25 12:53:18 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	this->brain->setIdea("Cat..", 0);
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
{
	this->type = other.getType();
	this->brain = new Brain(*other.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator = (const Cat& other)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		*(this->brain) = *(other.brain);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow~~" << std::endl;
}

std::string	Cat::getIdea(unsigned int idx) const { return this->brain->getIdea(idx); }

void	Cat::setIdea(std::string idea, unsigned int idx) { this->brain->setIdea(idea, idx); }