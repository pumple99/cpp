/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:48:11 by seunghoy          #+#    #+#             */
/*   Updated: 2023/12/30 21:35:13 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "FragTrap.hpp"

FragTrap::FragTrap()
: ClapTrap()
{
	std::cout << "Make default FragTrap with default ClapTrap" << std::endl;
	this->_hp = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string& str)
: ClapTrap(str)
{
	std::cout << "Make " << this->_name << " FragTrap with ";
	std::cout << this->_name << " ClapTrap" << std::endl;
	this->_hp = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& ft)
: ClapTrap(ft)
{
	std::cout << "copy generate FragTrap: " << _name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "destory FragTrap: " << _name << std::endl;
}

FragTrap&	FragTrap::operator = (const FragTrap& p)
{
	std::cout << "allocate FragTrap " << p._name << " to " << this->_name << '\n' << std::endl;
	if (this != &p)
	{
		this->_name = p._name;
		this->_hp = p._hp;
		this->_energyPoint = p._energyPoint;
		this->_attackDamage = p._attackDamage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	if (!this->_hp)
		std::cout << "FragTrap: " << this->_name << " is already dead.." << std::endl;
	else
	{
		std::cout << "FragTrap ";
		std::cout << this->_name << ": High five~!";
		std::cout << std::endl;
	}
}

void	FragTrap::trapStatus() const
{
	std::cout << "FragTrap: " << this->_name << std::endl;
	std::cout << "HP = " << this->_hp << ", EP = ";
	std::cout << this->_energyPoint << '\n' << std::endl;
}