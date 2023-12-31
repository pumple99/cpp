/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:05:39 by seunghoy          #+#    #+#             */
/*   Updated: 2023/12/30 21:20:24 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ScavTrap.hpp"

int main()
{
	std::string name("nameS");

	ScavTrap defaultS;
	ScavTrap nameS(name);


	name = "copy";
	ScavTrap for_copy(name);
	ScavTrap copy(for_copy);

	std::cout << "\n#######################\n" << std::endl;

	defaultS.attack(name);

	name = "some";
	nameS.takeDamage(200);
	nameS.attack(name);

	nameS.beRepaired(30);
	defaultS.beRepaired(10);

	copy = nameS;

	
	copy.beRepaired(10);
	copy.takeDamage(3);
	nameS.guardGate();
	defaultS.guardGate();

	std::cout << "#######################\n" << std::endl;
}