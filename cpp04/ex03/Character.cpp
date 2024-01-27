/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:14:01 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/27 11:32:14 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"

Character::Character(): _name("default")
{
	for (int i=0; i<4; i++)
		this->slot[i] = 0;
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
			if (this->slot[i])
				delete this->slot[i];
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
	if (!m)
	{
		std::cout << "No materia! Can't equip!" << std::endl;
		return ;
	}
	for (int i=0; i<4; i++)
	{
		if (!this->slot[i])
		{
			this->slot[i] = m;
			return ;
		}
	}
	std::cout << "Slot is full! Can't equip!" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "Out of range, Can't unequip!" << std::endl;
	else if (this->slot[idx])
	{
		std::cout << "unequiped!" << std::endl;
		this->slot[idx] = 0;
	}
	else
		std::cout << "Can't unequip! No materia at idx: " << idx << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Out of range, Can't use!" << std::endl;
	else if (this->slot[idx])
		this->slot[idx]->use(target);
	else
		std::cout << "Can't use! No materia at idx: " << idx << std::endl;
}
