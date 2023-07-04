/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:36:08 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/04 17:26:54 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../Zombie.hpp"

int main(void)
{
	std::cout << "------- make zombie with 3 ways -------" << std::endl;
	Zombie *aa = newZombie("aa");
	randomChump("bb");
	Zombie cc = Zombie("cc");

	std::cout << "------- use announce to aa and cc -------" << std::endl;
	aa->announce();
	cc.announce();

	std::cout << "------------ delete aa -----------" << std::endl;
	delete aa;
}