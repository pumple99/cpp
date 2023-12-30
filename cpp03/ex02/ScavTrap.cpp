/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:48:11 by seunghoy          #+#    #+#             */
/*   Updated: 2023/12/30 21:18:44 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
: ClapTrap()
{
	std::cout << "Make default ScavTrap with default ClapTrap" << std::endl;
	this->_hp = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string& str)
: ClapTrap(str)
{
	std::cout << "Make " << this->_name << " ScavTrap with ";
	std::cout << this->_name << " ClapTrap" << std::endl;
	this->_hp = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& st)
: ClapTrap(st)
{
	std::cout << "copy generate ScavTrap: " << _name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "destory ScavTrap: " << _name << std::endl;
}

ScavTrap&	ScavTrap::operator = (const ScavTrap& p)
{
	std::cout << "allocate ScavTrap " << p._name << " to " << this->_name << '\n' << std::endl;
	if (this != &p)
	{
		this->_name = p._name;
		this->_hp = p._hp;
		this->_energyPoint = p._energyPoint;
		this->_attackDamage = p._attackDamage;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (!this->_hp)
		std::cout << "ScavTrap: " << this->_name << " is already dead.." << std::endl;
	else if (this->_energyPoint)
	{
		std::cout << "ScavTrap: " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage;
		std::cout << " points of damage!" << std::endl;
		--this->_energyPoint;
	}
	else
		std::cout << "no energyPoint, cannot attack" << std::endl;
	this->trapStatus();
}

void	ScavTrap::guardGate()
{
	if (!this->_hp)
		std::cout << "ScavTrap: " << this->_name << " is already dead.." << std::endl;
	else
	{
		std::cout << "ScavTrap ";
		std::cout << this->_name << " is now in GateKeeper mode!";
		std::cout << std::endl;
	}
}

void	ScavTrap::trapStatus() const
{
	std::cout << "ScavTrap: " << this->_name << std::endl;
	std::cout << "HP = " << this->_hp << ", EP = ";
	std::cout << this->_energyPoint << '\n' << std::endl;
}