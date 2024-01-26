/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:14:46 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/25 13:12:04 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	this->brain->setIdea("Dog..", 0);
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
{
	this->type = other.getType();
	this->brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator = (const Dog& other)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		*(this->brain) = *(other.brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Bark!!" << std::endl;
}

std::string	Dog::getIdea(unsigned int idx) const { return this->brain->getIdea(idx); }

void	Dog::setIdea(std::string idea, unsigned int idx) { this->brain->setIdea(idea, idx); }