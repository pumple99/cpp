/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:05:39 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/22 17:27:56 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	std::string name("dia");
	DiamondTrap dia(name);
	DiamondTrap d;

	DiamondTrap copy(dia);

	std::cout << "\n#######################\n" << std::endl;

	dia.trapStatus();
	copy.whoAmI();
	dia.attack("target");

	dia = d;

	dia.trapStatus();
	dia.whoAmI();

	std::cout << "#######################\n" << std::endl;
}