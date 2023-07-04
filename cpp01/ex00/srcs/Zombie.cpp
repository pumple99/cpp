/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:17:22 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/04 17:27:09 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../Zombie.hpp"

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