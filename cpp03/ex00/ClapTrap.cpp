/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 22:52:45 by seunghoy          #+#    #+#             */
/*   Updated: 2023/12/24 20:01:45 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
: _name("default"), _hp(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "generate default ClapTrap: " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string& str)
: _name(str), _hp(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "generate named ClapTrap: " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ct)
: _name(ct._name), _hp(ct._hp), _energyPoint(ct._energyPoint), \
_attackDamage(ct._attackDamage)
{
	std::cout << "copy generate ClapTrap: " << _name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destory ClapTrap: " << _name << std::endl;
}

ClapTrap&	ClapTrap::operator = (const ClapTrap& p)
{
	std::cout << "allocate " << p._name << " to " << this->_name << '\n' << std::endl;
	if (this != &p)
	{
		this->_name = p._name;
		this->_hp = p._hp;
		this->_energyPoint = p._energyPoint;
		this->_attackDamage = p._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->_hp)
		std::cout << "ClapTrap: " << this->_name << " is already dead.." << std::endl;
	else if (this->_energyPoint)
	{
		std::cout << "ClapTrap: " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage;
		std::cout << " points of damage!" << std::endl;
		--this->_energyPoint;
	}
	else
		std::cout << "no energyPoint, cannot attack" << std::endl;
	this->clapTrapStatus();
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap: " << this->_name << " gets " << amount;
	std::cout << " damage!" << std::endl;
	if (!this->_hp)
		std::cout << "ClapTrap: " << this->_name << " is already dead.." << std::endl;
	else if (this->_hp > amount)
		this->_hp -= amount;
	else
	{
		std::cout << "ClapTrap: " << this->_name << " died!" << std::endl;
		this->_hp = 0;
	}
	this->clapTrapStatus();
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_hp)
		std::cout << "ClapTrap: " << this->_name << " is already dead.." << std::endl;
	else if (this->_energyPoint)
	{
		std::cout << "ClapTrap: " << this->_name << " repairs ";
		std::cout << amount << " hit points" << std::endl;
		this->_hp += amount;
		--this->_energyPoint;
	}
	else
		std::cout << "no energyPoint, cannot repair" << std::endl;
	this->clapTrapStatus();
}

void	ClapTrap::clapTrapStatus()
{
	std::cout << this->_name << ": HP = " << this->_hp;
	std::cout << ", EP = " << this->_energyPoint << '\n' << std::endl;
}
