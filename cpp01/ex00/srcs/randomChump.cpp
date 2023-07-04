/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:51:54 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/04 17:27:03 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "../Zombie.hpp"

void	randomChump( std::string name)
{
	Zombie(name).announce();
}