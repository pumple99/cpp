/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:36:08 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/05 15:50:14 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../Zombie.hpp"

int main(void)
{
	int zomNum = 5;
	std::cout << "-------- create zombies ---------" << std::endl;
	Zombie *zom0 = new Zombie("zom0");
	Zombie zom1;
	Zombie *zoms = zombieHorde(zomNum, "zoms");

	std::cout << "--------- announce zombies ----------" << std::endl;
	zom0->announce();
	zom1.announce();
	for (int i = 0; i < zomNum; i++)
		zoms[i].announce();
	
	std::cout << "----------- delete zombies ------------" <<std::endl;
	delete [] zoms;
	delete zom0;
}