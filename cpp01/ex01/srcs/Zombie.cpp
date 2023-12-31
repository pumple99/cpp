/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:17:22 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/05 15:36:50 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Generate anonymous zombie" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Generate zombie: " << name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " died!" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string& name)
{
	this->name = name;
}