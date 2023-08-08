/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 22:52:45 by seunghoy          #+#    #+#             */
/*   Updated: 2023/08/08 23:41:36 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string& str)
: _name(str), _hp(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "generate ClapTrap: " << _name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destory ClapTrap: " << _name << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->_hp)
	{
		std::cout << "ClapTrap: " << this->_name << " is already dead.." << std::endl;
		return ;
	}
	if (this->_energyPoint)
	{
		std::cout << "ClapTrap: " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage;
		std::cout << " points of damage!" << std::endl;
		--this->_energyPoint;
	}
	else
		std::cout << "no energyPoint, cannot attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap: " << this->_name << " gets " << amount;
	std::cout << " damage!" << std::endl;
	if (!this->_hp)
	{
		std::cout << "ClapTrap: " << this->_name << " is already dead.." << std::endl;
		return ;
	}
	if (this->_hp > amount)
		this->_hp -= amount;
	else
	{
		std::cout << "ClapTrap: " << this->_name << " died!" << std::endl;
		this->_hp = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoint)
	{
		if (this->_hp)
		{
			std::cout << "ClapTrap: " << this->_name << " repairs ";
			std::cout << amount << " hit points" << std::endl;
			this->_hp += amount;
		}
		else
		{
			std::cout << "ClapTrap: " << this->_name << " has been revied with ";
			std::cout << amount << " hit points" << std::endl;
			this->_hp = amount;
		}
		--this->_energyPoint;
	}
	else
		std::cout << "no energyPoint, cannot repair" << std::endl;
}
