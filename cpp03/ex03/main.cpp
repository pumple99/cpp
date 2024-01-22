/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:05:39 by seunghoy          #+#    #+#             */
/*   Updated: 2023/12/30 21:36:02 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "FragTrap.hpp"

int main()
{
	std::string name("nameS");

	FragTrap defaultS;
	FragTrap nameS(name);


	name = "copy";
	FragTrap for_copy(name);
	FragTrap copy(for_copy);

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
	nameS.highFivesGuys();
	defaultS.highFivesGuys();

	std::cout << "#######################\n" << std::endl;
}