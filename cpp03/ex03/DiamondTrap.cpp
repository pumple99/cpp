/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 22:52:45 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/22 11:18:42 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
: _name("default"), _hp(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "generate  default DiamondTrap: " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string& str)
: _name(str), _hp(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "generate named DiamondTrap: " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& ct)
: _name(ct._name), _hp(ct._hp), _energyPoint(ct._energyPoint), \
_attackDamage(ct._attackDamage)
{
	std::cout << "copy generate DiamondTrap: " << _name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "destory DiamondTrap: " << _name << std::endl;
}

DiamondTrap&	DiamondTrap::operator = (const DiamondTrap& p)
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



void	DiamondTrap::trapStatus() const
{
	std::cout << "DiamondTrap: " << this->_name << std::endl;
	std::cout << "HP = " << this->_hp << ", EP = ";
	std::cout << this->_energyPoint << '\n' << std::endl;
}
