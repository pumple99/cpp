/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:22:39 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/05 15:49:00 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include "../Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
	if (N <= 0)
		(std::cout << "Not positive N, program exit.\n", exit(1));

	Zombie *zh = new Zombie[N];
	for (int i = 0; i < N; i++)
		zh[i].setName(name);
	
	return (zh);
}