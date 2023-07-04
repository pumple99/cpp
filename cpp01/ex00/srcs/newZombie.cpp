/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:24:18 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/04 17:30:26 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "../Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	return (new Zombie( name ));
}