/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 22:52:45 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/22 16:41:04 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
: ClapTrap(), ScavTrap(), FragTrap(), _name("defalut")
{
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_energyPoint = 50;
	std::cout << "generate default DiamondTrap: " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(std::string& str)
: ClapTrap(str), ScavTrap(str), FragTrap(str), _name(str)
{
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_energyPoint = 50;
	std::cout << "generate named DiamondTrap: " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& dt)
: ClapTrap(dt), ScavTrap(dt), FragTrap(dt), _name(dt._name)
{
	std::cout << "copy generate DiamondTrap: " << this->_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "destory DiamondTrap: " << this->_name << std::endl;
}

DiamondTrap&	DiamondTrap::operator = (const DiamondTrap& p)
{
	std::cout << "allocate " << p._name << " to " << this->_name << '\n' << std::endl;
	if (this != &p)
	{
		this->_name = p._name;
		this->ClapTrap::_name = p.ClapTrap::_name;
		this->_hp = p._hp;
		this->_energyPoint = p._energyPoint;
		this->_attackDamage = p._attackDamage;
	}
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Who am I?" << std::endl;
	std::cout << "name: " << this->_name << std::endl;
	std::cout << "claptrap name: " << this->ClapTrap::_name << std::endl;
}

void	DiamondTrap::trapStatus() const
{
	std::cout << "DiamondTrap: " << this->_name << std::endl;
	std::cout << "HP = " << this->_hp << ", EP = ";
	std::cout << this->_energyPoint << '\n' << std::endl;
}
