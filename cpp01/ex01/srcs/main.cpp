/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:36:08 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/04 21:39:12 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../Zombie.hpp"

int main(void)
{
	Zombie *zoms = zombieHorde(5, "sss");

	delete [] zoms;
}