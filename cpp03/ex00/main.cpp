/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:05:39 by seunghoy          #+#    #+#             */
/*   Updated: 2023/08/20 16:53:39 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

int main()
{
	std::string name("n");

	ClapTrap d;
	ClapTrap n(name);

	name = "c";
	ClapTrap c(name);

	std::cout << "\n#######################\n" << std::endl;

	d.attack(name);

	name = "some";
	n.takeDamage(200);
	n.attack(name);

	n.beRepaired(30);
	d.beRepaired(10);

	c = n;

	name = "anywhere";
	for (int i = 0; i < 10; i++)
	{
		c.attack(name);
	}
	
	c.beRepaired(10);
	c.takeDamage(3);

	std::cout << "#######################\n" << std::endl;
}