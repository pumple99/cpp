/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:14:01 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/26 20:37:53 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"

Character::Character(): _name("default")
{
	for (int i=0; i<4; i++)
		this->slot[i] = 0;
	std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(std::string const & name): _name(name)
{
	for (int i=0; i<4; i++)
		this->slot[i] = 0;
	std::cout << "Character naming constructor called" << std::endl;
}

Character::Character(const Character& o): _name(o._name)
{
	for (int i=0; i<4; i++)
	{
		if (o.slot[i])
			this->slot[i] = o.slot[i]->clone();
		else
			this->slot[i] = 0;
	}
	std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character()
{
	for (int i=0; i<4; i++)
	{
		if (this->slot[i])
			delete this->slot[i];
	}
	std::cout << "Character destructor called" << std::endl;
}

Character&	Character::operator = (const Character& o)
{
	std::cout << "Character assignment operator called" << std::endl;
	if (this != &o)
	{
		this->_name = o._name;
		for (int i=0; i<4; i++)
		{
			if (o.slot[i])
				this->slot[i] = o.slot[i]->clone();
			else
				this->slot[i] = 0;
		}
	}
	return (*this);
}

std::string const & Character::getName() const { return this->_name; }

void	Character::equip(AMateria* m)
{

}

void	Character::unequip(int idx)
{

}

void	Character::use(int idx, ICharacter& target)
{
	
}
