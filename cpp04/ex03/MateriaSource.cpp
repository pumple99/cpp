/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 10:38:44 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/27 13:59:20 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i=0; i<4; i++)
		this->slot[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& o)
{
	for (int i=0; i<4; i++)
	{
		if (o.slot[i])
			this->slot[i] = o.slot[i]->clone();
		else
			this->slot[i] = 0;
	}
}

MateriaSource::~MateriaSource()
{
	AMateria	*tmp;
	for (int i=0; i<4; i++)
	{
		tmp = this->slot[i];
		if (tmp)
		{
			delete this->slot[i];
			for (int j=i+1; j<4; j++)
			{
				if (tmp == this->slot[j])
					this->slot[j] = 0;
			}
		}
	}
}

MateriaSource&	MateriaSource::operator = (const MateriaSource& o)
{
	if (this != &o)
	{
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

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i=0; i<4; i++)
	{
		if (!this->slot[i])
		{
			this->slot[i] = m;
			return;
		}
	}
	std::cout << "MateriaSource slot is full!" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i=0; i<4; i++)
	{
		if (this->slot[i] && this->slot[i]->getType() == type)
			return this->slot[i]->clone();
	}
	std::cout << "Can't find given materia type" << std::endl;
	return 0;
}
