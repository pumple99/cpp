/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:05:39 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/22 17:23:03 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ScavTrap.hpp"

int main()
{
	std::string name("n");

	ScavTrap d;
	ScavTrap n(name);


	name = "c";
	ScavTrap for_copy(name);
	ScavTrap c(for_copy);

	std::cout << "\n#######################\n" << std::endl;

	d.attack(name);

	name = "some";
	n.takeDamage(200);
	n.attack(name);

	c.trapStatus();
	
	c = n;

	c.trapStatus();
	n.trapStatus();
	
	d.guardGate();
	c.guardGate();

	std::cout << "#######################\n" << std::endl;
}