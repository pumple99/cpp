/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:22:39 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/04 21:39:43 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "../Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (std::cout << "Wrong N, returns 0" << std::endl, (Zombie *)0);
	Zombie *zh = new Zombie[N];
	if (name == "jj")
		N++;
	return (zh);
}